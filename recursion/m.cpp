#include <iostream>

using namespace std;

int n, m, counter;

long long summation(long long arr[])
{
    if (counter == m)
    {
        return 0;
    }
    counter++;

    return arr[--n] + summation(arr);
}

int main()
{
    cin >> n >> m;
    // start --->> m -1;

    long long arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long  sum = summation(arr);

    cout<<sum<<endl;

    return 0;
}