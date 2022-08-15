#include <bits/stdc++.h>

using namespace std;

int main()
{
    double x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

    double nX = (x1 + x2) / 2, nY = (y1 + y2) / 2;
    double r1 = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)) / 2;

    double mX = (x3 + x4) / 2;
    double mY = (y3 + y4) / 2;
    double r2 = sqrt(pow(x3 - x4, 2) + pow(y3 - y4, 2)) / 2;

    double nM = sqrt(pow(nX - mX, 2) + pow(nY - mY, 2));
    double r1r2 = r1 + r2;

    r1r2 > nM ? cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}