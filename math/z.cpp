#include <bits/stdc++.h>

using namespace std;

int main()
{
    double r, s;
    cin >> r >> s;

    if (s >= r * 2)
    {
        cout << "Square" << endl;
    }
    else if (r * 2 > sqrt(pow(s, 2) + pow(s, 2)))
    {
        cout << "Circle" << endl;
    }
    else
    {
        cout << "Complex" << endl;
    }

    return 0;
}