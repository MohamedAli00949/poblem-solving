#include <iostream>

using namespace std;

void binaryNum(int n)
{
    if (n > 0)
    {
        binaryNum(n / 2);
        cout << n % 2;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        binaryNum(n);
        cout<<endl;
    }

    return 0;
}