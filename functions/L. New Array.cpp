#include <iostream>

using namespace std;

void print(int arrA[], int arrB[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arrB[i] << " ";
    }

    for (int i = 0; i < n; i++)
    {
        cout << arrA[i];
        i == n - 1 ? cout << endl : cout << " ";
    }
}

int main()
{
    int n;
    cin >> n;

    int arrA[n], arrB[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arrA[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> arrB[i];
    }

    print(arrA, arrB, n);

    return 0;
}