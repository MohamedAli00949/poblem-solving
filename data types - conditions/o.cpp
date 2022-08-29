#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    string a, first, last;
    char operation;
    int fNum, lNum, result;
    cin >> a;

    for (int i = 0; i < a.length(); i++)
    {
        char n = a[i];
        if (n >= 48 & n < 58)
        {
            if (operation >= 42 & operation < 48)
                last = last + a[i];
            else
                first = first + a[i];
        }
        else
        {
            operation = n;
        }
    }

    stringstream geekF(first);
    geekF >> fNum;

    stringstream geekL(last);
    geekL >> lNum;

    // cout<<fNum<<operation<<lNum<<" = "<<fNum+lNum<<endl;

    if (operation == 42)
    {
        result = fNum * lNum;
    }
    else if (operation == 43)
    {
        result = fNum + lNum;
    }
    else if (operation == 45)
    {
        result = fNum - lNum;
    }
    else
    {
        result = fNum / lNum;
    }
    cout << result << endl;

    return 0;
}