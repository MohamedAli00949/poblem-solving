#include <bits/stdc++.h>

using namespace std;

float square(float num)
{
    return num * num;
}

int main()
{
    int n;
    double cX, cY, r;
    cin >> cX >> cY >> r >> n;

    for (int i = 0; i < n; i++)
    {
        double x, y;
        cin >> x >> y;

        double distance = sqrt(square(x-cX) + square(y-cY));
        distance <= r ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }

    return 0;
}