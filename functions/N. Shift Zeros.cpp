#include <iostream>

using namespace std;

int counterZero(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count++;
        }
        else
        {
            cout << arr[i] << " ";
        }
    }
    return count;
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

    int zeroCounter = counterZero(arr, n);

    for (int i = 0; i < zeroCounter; i++)
    {
        cout <<0;
        i == zeroCounter-1 ? cout<<"" : cout<<" ";
    }

    return 0;
}