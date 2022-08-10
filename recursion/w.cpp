#include <iostream>

using namespace std;
int initialNum = 1;

/*
    1 -> yes
    2 ->
*/
bool reach(long long n, long long result)
{
    if (n < result)
    {
        return false;
    }
    else if (n == result)
    {
        return true;
    }
    else
    {
        return reach(n, result * 10) || reach(n, result * 20);
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        reach(n, initialNum) ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}