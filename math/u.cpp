#include <iostream>

using namespace std;

int main()
{
    int aX, aY, bX, bY, cX, cY;
    cin >> aX >> aY >> bX >> bY >> cX >> cY;

    int scope1 = (cY - bY) * (bX - aX), scope2 = (bY - aY) * (cX - bX);

    (scope1 == scope2) ? cout << "YES" : cout << "NO";

    return 0;
}