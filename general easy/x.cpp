#include <bits/stdc++.h>
#include <string>

using namespace std;

bool isPrime(int num)
{
    bool result = true;

    if (num == 1 || num == 0)
    {
        return false;
    }

    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            result = false;
            break;
        }
    }

    return result;
}

int nextPrime(int num)
{
    if (num <= 1)
    {
        return 2;
    }

    bool found = false;
    while (!found)
    {
        num++;
        if (isPrime(num))
        {
            found = true;
        }
    }
    return num;
}

int main()
{
    int n, m;

    cin >> n >> m;

    if (!isPrime(m))
    {
        cout << "NO";
    }
    else
    {
        if (nextPrime(n) == m)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }

    return 0;
}