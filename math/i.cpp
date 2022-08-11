#include <iostream>

using namespace std;

long long sum(long long num)
{
    return num * (num + 1) / 2;
}

int main()
{
    long long a, b, x, max, min;
    cin >> a >> b >> x;

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

    // if (min % x != 0)
    // {
    //     for (long long i = min; i <= max; i++)
    //     {
    //         if (i % x == 0)
    //         {
    //             sum += i;
    //         }
    //     }
    // }
    // else
    // {
    //     long long maxX = min;
    //     int minTimes = 1;

    //     for (int i = 1; i <= max / min; i++)
    //     {
    //         sum += min * i;
    //     }
    // }

    cout << (sum(max / x) * x) - (sum((min - 1) / x) * x);

    return 0;
}