#include <iostream>

using namespace std;

int main()
{
    long long n, m, lastN, lastM;

    cin>> n >> m;

    lastM = m % 10;
    lastN = n % 10;

    cout<< lastN + lastM;

    return 0;
}