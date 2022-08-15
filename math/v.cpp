#include <iostream>

using namespace std;

int main()
{
    long long x1, x2, x3, x4, y1, y2, y3, y4;
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> x3 >> y3 >> x4 >> y4;

    long long scope1 = (y1 - y2) * (x3 - x4), scope2 = (y3 - y4) * (x1 - x2);

    scope1 == scope2 ? cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}