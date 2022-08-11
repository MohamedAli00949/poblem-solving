#include <iostream>

using namespace std;

int main()
{
    long long num, count = 0, sum = 0;
    cin >> num;

    for (long long i = 1; i < num; i++)
    {
        sum += i;
        count++;
        if (sum + i + 1 > num)
        {
            break;
        }
    }

    cout << count;

    return 0;
}