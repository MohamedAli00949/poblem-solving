#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int num, lastNum;
    cin >> num;

    for (int n = 0; n < num; n++)
    {
        lastNum = 1;
        for (int i = 0; i <= n; i++)
        {
            cout << lastNum << " ";
            lastNum = lastNum * (n - i) / (i + 1);
        }
        cout << endl;
    }

    return 0;
}