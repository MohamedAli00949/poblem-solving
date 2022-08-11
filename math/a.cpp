#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long num;
    cin >> num;

    double reserve = log2(num) / log2(2);

    (reserve - (int)reserve) == 0 ? cout << "YES" : cout << "NO";

    return 0;
}