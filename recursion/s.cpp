#include <bits/stdc++.h>

using namespace std;

double avrage(int arr[], int n, int index)
{
    if (index + 1 == n)
    {
        return arr[index];
    }

    return (arr[index] + avrage(arr, n, ++index));
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

    double avg = avrage(arr, n, 0) / n;

    cout << fixed << setprecision(6) << avg << endl;

    return 0;
}