#include <iostream>

using namespace std;

long long summation(long long arr[], int n, int start, long long sum)
{
    sum += arr[start];
    if (start == n - 1)
    {
        return sum;
    }

    return summation(arr, n, ++start, sum);
}

int main()
{

    int n;
    cin >> n;

    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << summation(arr, n, 0, 0);

    return 0;
}