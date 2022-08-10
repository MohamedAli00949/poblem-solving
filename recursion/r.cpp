#include <iostream>

using namespace std;

/*
    left ++
    right --
*/

bool palindrom(int arr[], int n, int index, bool pastStatus)
{
    if (index == n)
    {
        return pastStatus;
    }

    bool status = arr[index] == arr[n - index -1] ? true : false;

    bool newStatus = pastStatus && status;

    return palindrom(arr, n, ++index, newStatus);
}

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    palindrom(arr, n, 0, true) ? cout << "YES" : cout << "NO";

    return 0;
}