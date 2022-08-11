#include <iostream>
#include <vector>

using namespace std;

/**
 * @par(num1 ---> largest)
 * num2 ---> lowest
 *
 */
long long gcd(long long num1, long long num2)
{

    if (num2 == 0)
        return num1;

    return gcd(num2, num1 % num2);
}

long long lcm(long long num1, long long num2, long long gcd)
{
    // int end = times * 12;
    // int start = end - 12 + 1;
    // vector<long long> num1Dividors, num2Dividors;
    // long long commonDividor = 0;

    // for (int i = start; i <= end; i++)
    // {
    //     if (num1 * i == num2 * i)
    //     {
    //         return i;
    //     }

    //     num1Dividors.push_back(i * num1);
    //     num2Dividors.push_back(i * num2);
    // }

    // for (int i = 0; i < 12; i++)
    // {
    //     for (int j = 0; j < 12; j++)
    //     {
    //         // cout << num1Dividors[i] << " - " << num2Dividors[j] << endl;
    //         if (num2Dividors[j] % num1Dividors[i] == 0)
    //         {
    //             return num2Dividors[j];
    //         }
    //     }
    // }

    return (num1 / gcd) * num2;
}

int main()
{
    long long a, b, max, min;
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

    int gCD = gcd(max, min);

    cout << gCD << " " << lcm(min, max, gCD) << endl;

    return 0;
}