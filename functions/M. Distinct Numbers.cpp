#include <iostream>

using namespace std;

int find(int arr[], int num, int n)
{
    int found = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            return i;
        }
    }
    return found;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    int distinctNums = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i == 0)
        {
            distinctNums++;
        }
        else
        {
            if (find(arr, arr[i], i) == -1)
            {
                distinctNums++;
            }
        }
    }
    cout << distinctNums << endl;

    return 0;
}