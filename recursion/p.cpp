#include <iostream>

using namespace std;

long long logTwo(long long n, long long count)
{
    if (n == 1)
    {
        return count;
    }

    return logTwo(n / 2, ++count);
}

int main()
{
    long long n;
    cin>>n;

    cout<<logTwo(n, 0);

    return 0;
}