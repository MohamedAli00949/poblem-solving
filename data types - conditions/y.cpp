#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a, b, c, d;
    cin>>a>>b>>c>>d;

    a %= 100;
    b %= 100;
    c %= 100;
    d %= 100;

    int result = a * b * c * d;
    result % 100 <= 9 ? cout<<0<<result % 100 : cout<<result % 100;
    return 0;
}