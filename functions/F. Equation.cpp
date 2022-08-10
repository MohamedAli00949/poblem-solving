#include <bits/stdc++.h>

using namespace std;

long long equation(int x, int n);

int main()
{
    int n, x;
    cin >> x >> n;

    cout << equation(x, n);
    return 0;
}

long long equation(int x, int n)
{
    long long s = 0;
    for (int i = 2; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            s += pow(x, i);
        }
    }

    return s;
}