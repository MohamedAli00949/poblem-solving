#include <iostream>

using namespace std;

int findNearestOdd(int lastNum)
{
    if (lastNum == 0)
    {
        return lastNum + 1;
    }

    return lastNum + 2;
}

void printStars(int n, int i)
{
    int lastNum;
    if (i + 1 == 1)
    {
        // if (i == 0)
        // {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << "*" << endl;
    }
    else if (n - 1 == i)
    {
        lastNum = i * 2 + 1;
        for (int j = 0; j < lastNum; j++)
        {
            cout << "*";
        }
        cout << endl;
        printStars(n, i - 1);
    }
    else
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        lastNum = i * 2 + 1;
        for (int j = 0; j < lastNum; j++)
        {
            cout << "*";
        }
        cout << endl;
        printStars(n, i - 1);
    }
}

int main()
{
    int n;
    cin >> n;

    printStars(n, n - 1);

    return 0;
}