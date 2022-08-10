#include <iostream>

using namespace std;

void print(int arr[], int n);
void shiftItems(int arr[], int n, int x);

int main()
{
    int n, x;
    cin >> n >> x;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (x % n != 0)
    {

        shiftItems(arr, n, x % n);
    }
    else
    {
        print(arr, n);
    }

    return 0;
}

void shiftItems(int arr[], int n, int x)
{
    int last = arr[n - 1];
    int temp = arr[0];
    while (x--)
    {
        for (int i = n - 1; i > 0; i--)
        {
            int temp = arr[i];
            arr[i] = arr[i - 1];
            arr[i - 1] = temp;
        }
    }
    print(arr, n);
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
        i == n - 1 ? cout << endl : cout << " ";
    }
}