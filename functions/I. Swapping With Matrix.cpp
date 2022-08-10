#include <iostream>

using namespace std;

void swapRow(int arr[500][500], int n, int row1, int row2)
{

    for (int i = 0; i < n; i++)
    {
        int temp = arr[row1][i];
        arr[row1][i] = arr[row2][i];
        arr[row2][i] = temp;
    }
}

void swapColumn(int arr[500][500], int n, int col1, int col2)
{
    for (int i = 0; i < n; i++)
    {
        int temp = arr[i][col2];
        arr[i][col2] = arr[i][col1];
        arr[i][col1] = temp;
    }
}

int main()
{
    int n, x, y;
    cin >> n >> x >> y;

    int arr[500][500];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    swapRow(arr, n, x - 1, y - 1);
    swapColumn(arr, n, x - 1, y - 1);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j];

            j == n-1 ? cout<<endl : cout<<" ";
        }
    }

    return 0;
}