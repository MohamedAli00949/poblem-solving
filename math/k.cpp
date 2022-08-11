#include <iostream>

using namespace std;

long long factorial(long long num)
{
    long long result = 1;

    for (long long i = 1; i <= num; i++)
    {
        result *= i;
    }

    return result;
}

int main()
{
    long long a, b;
    cin >> a >> b;

    long long bF = factorial(b), aF = factorial(a), abF = factorial(a - b);
    long long c = aF / (bF * abF), p = aF / abF;

    cout << c << " " << p << endl;

    return 0;
}