#include <iostream>

using namespace std;

void printEvenIndices(int arr[], int n, int i)
{
    if (i < n & i % 2 == 0)
    {
        printEvenIndices(arr, n, i + 2);
        cout << arr[i];
        cout << " ";
    }
}

int main()
{
    int n;
    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    printEvenIndices(arr, n, 0);

    return 0;
}