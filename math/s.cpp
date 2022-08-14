#include <bits/stdc++.h>

using namespace std;

int main()
{
    /**
     * the length in shapes always be double not an integer
     * 
     */
    double a, b, c;
    cin >> a >> b >> c;

    float s = (a + b + c) / 2;

    float area = sqrt(s * (s - a) * (s - b) * (s - c));

    cout<<fixed;
    area > 0 ? cout << "Valid" <<"\n"<<setprecision(6)<< area << endl : cout << "Invalid" << endl;

    return 0;
}