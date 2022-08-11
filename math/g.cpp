#include <bits/stdc++.h>

using namespace std;

long long sumDividors(long long num)
{
    long long sum = 0;

    for (int i = 1; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            sum += i;
            if (i != sqrt(num))
            {
                sum += num / i;
            }
        }
    }

    return sum;
}

int main()
{
    long long num;
    cin >> num;

    cout << sumDividors(num);

    return 0;
}