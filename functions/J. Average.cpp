#include<bits/stdc++.h>

using namespace std;

double avarage(double arr[], int n)
{
    double avg;
    if (n == 1)
    {
        return arr[n - 1];
    }
    else
    {
        avg = arr[n - 1] + avarage(arr, n - 1);
    }

    return avg;
}

int main()
{
    int n;
    cin >> n;

    double arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << setprecision(8) << avarage(arr, n) / n;

    return 0;
}