#include <bits/stdc++.h>

using namespace std;

long long squre(long long num)
{
    return num * num;
}

int main()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    // double result = sqrt(squre(x1 - x2) + squre(y1 - y2));

    cout<<fixed;
    cout <<setprecision(9)<< sqrt(squre(x1 - x2) + squre(y1 - y2));

    return 0;
}