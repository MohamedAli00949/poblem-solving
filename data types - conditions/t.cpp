#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a >= b & b >= c)
    {
        cout << c << "\n"
             << b << "\n"
             << a << endl;
    }
    else if (a >= c & c >= b)
    {
        cout << b << "\n"
             << c << "\n"
             << a << endl;
    }
    else if (b >= a & a >= c)
    {
        cout << c << "\n"
             << a << "\n"
             << b << endl;
    }
    else if (b >= c & c >= a)
    {
        cout << a << "\n"
             << c << "\n"
             << b << endl;
    }
    else if (c >= a & a >= b)
    {
        cout << b << "\n"
             << a << "\n"
             << c << endl;
    }
    else
    {
        cout << a << "\n"
             << b << "\n"
             << c << endl;
    }

    cout << endl;

    cout << a << "\n"
         << b << "\n"
         << c;

    return 0;
}