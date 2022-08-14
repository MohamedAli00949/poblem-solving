#include <bits/stdc++.h>

using namespace std;

long long product(long long l, long long r, long long m)
{
    long long start = min(l, r), end = max(l, r);
    long long result = start;

    for (int i = start+1; i <= end; i++)
    {
        result *= i;
        result %= m;
    }

    return result;
}

int main()
{
    long long l, r, m;
    cin >> l >> r >> m;

    cout << product(l, r, m);

    return 0;
}