#include <iostream>

using namespace std;

int n;
void leftMax(int arr[], int i, int &max)
{
    if (i <= n - 1)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        else
        {
            arr[i] = max;
        }

        leftMax(arr, i + 1, max);
    }
}

int main()
{
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max = arr[0];

    leftMax(arr, 0, max);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
        i == n - 1 ? cout << endl : cout << " ";
    }

    return 0;
}