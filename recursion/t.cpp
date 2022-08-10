#include <iostream>

using namespace std;

long long factorial(long long num1, long long num2)
{
    long long result = 1, temp = 2;
    for (int i = num2 + 1; i <= num1; i++)
    {
        result *= i;
        if (temp <= num1 - num2 && result % temp == 0)
        {
            result /= temp;
            temp++;
        }
    }

    return result;
}

int main()
{
    long long n, r;
    cin >> n >> r;

    // long long fN = factorial(n), fR = factorial(r), fNR = factorial(n - r);

    if (n < r)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << factorial(n, r) << endl;
    }

    return 0;
}