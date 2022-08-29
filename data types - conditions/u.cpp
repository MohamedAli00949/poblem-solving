#include <iostream>
#include <string>

using namespace std;

int main()
{
    double num, floatNum;
    cin >> num;

    int intNum = num;
    floatNum = num - intNum;

    if (intNum == num)
    {
        cout << "int " << intNum;
    }
    else
    {
        cout << "float " << intNum << " " << floatNum;
    }

    return 0;
}