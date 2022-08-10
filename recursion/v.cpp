#include <iostream>

using namespace std;

long long n, x;
long long arr[500];

bool creatExperition(long index, long long sum)
{
    if (index == n)
    {
        return sum == x;
    }

    bool summition = creatExperition(index + 1, sum + arr[index]);
    bool sub = creatExperition(index + 1, sum - arr[index]);

    return summition || sub;
}

int main()
{
    cin >> n >> x;

    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    creatExperition(1, arr[0]) ? cout << "YES" : cout << "NO";

    return 0;
}