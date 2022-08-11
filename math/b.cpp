#include <bits/stdc++.h>

using namespace std;

bool isPrime(long long num)
{
    if (num == 0 || num == 1)
    {
        return false;
    }

    for (long long i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
            return false;
    }

    return true;
}

int main()
{
    long long n;
    cin >> n;

    isPrime(n) ? cout << "YES" : cout << "NO";

    return 0;
}