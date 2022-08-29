#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    string a, f;
    int first;

    cin >> a;
    f = a[0];
    stringstream geek(f);
    geek >> first;

    if (first % 2 == 0)
    {
        cout << "EVEN";
    }
    else
    {
        cout << "ODD";
    }

    return 0;
}