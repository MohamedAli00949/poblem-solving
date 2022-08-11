#include <iostream>

using namespace std;

long long sumAllRange(long long a, long long b)
{
    long long sum = 0;

    for (long long i = a; i <= b; i++)
    {
        sum += i;
    }

    return sum;
}

int main()
{
    long long a, b, max, min, sumAllRange = 0, sumEven = 0, sumOdd = 0;

    cin >> a >> b;
    if (a > b)
    {
        max = a;
        min = b;
    }
    else
    {
        max = b;
        min = a;
    }

    for (int i = min; i <= max; i++)
    {
        sumAllRange += i;

        if (i % 2 == 0)
        {
            sumEven += i;
        }
        else
        {
            sumOdd += i;
        }
    }

    cout << sumAllRange << endl;
    cout << sumEven << endl;
    cout << sumOdd << endl;

    return 0;
}