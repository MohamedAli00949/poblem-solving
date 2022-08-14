#include <bits/stdc++.h>

using namespace std;

double factorial(long long n)
{
    double result = 0;

    for (long long i = 2; i <= n; i++)
    {
        result += log10(i);
    }

    return result + 1;
}

int main()
{
    long long n;
    cin >> n;

    cout << "Number of digits of " << n << "! is " << int(factorial(n));

    return 0;
}