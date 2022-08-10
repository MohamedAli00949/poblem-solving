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

void printStars(int n, int i, int lastNum)
{
    if (n - 1 == i)
    {
        if (i == 0)
        {
            cout << "*" << endl;
        }
        else
        {
            lastNum = findNearestOdd(lastNum);
            for (int j = 0; j < lastNum; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
    else
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        lastNum = findNearestOdd(lastNum);
        for (int j = 0; j < lastNum; j++)
        {
            cout << "*";
        }
        cout << endl;
        if (n - 1 != i)
        {
            printStars(n, i + 1, lastNum);
        }
    }
}

int main()
{
    int n;
    cin >> n;

    printStars(n, 0, 0);

    return 0;
}