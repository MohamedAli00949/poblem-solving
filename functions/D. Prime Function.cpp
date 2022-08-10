#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n);

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        if (n == 0 || n == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            isPrime(n) ? cout << "YES" << endl : cout << "NO" << endl;
        }
    }

    return 0;
}

bool isPrime(int n)
{
    bool prime = true;
    if (n == 0 || n == 1)
    {
        return false;
    }

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            prime = false;
            break;
        }
    }

    return prime;
}