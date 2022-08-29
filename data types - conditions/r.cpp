#include <iostream>

using namespace std;

int main()
{
    int n, y, m, d;

    cin >> n;

    y = n / 365;

    m = (n % 365) / 30;

    d = (n % 365) % 30;

    cout << y << " years\n"
         << m << " months\n"
         << d << " days";

    return 0;
}