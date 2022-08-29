#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a, b;
    string s;
    cin >> a >> s >> b;

    if (s == ">")
    {
        if (a > b)
        {
            cout << "Right";
        }
        else
        {
            cout << "Wrong";
        }
    }
    else if (s == "<")
    {
        if (a < b)
        {
            cout << "Right";
        }
        else
        {
            cout << "Wrong";
        }
    }
    else if (s == "=")
    {
        if (a == b)
        {
            cout << "Right";
        }
        else
        {
            cout << "Wrong";
        }
    }

    return 0;
}