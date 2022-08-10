#include <iostream>

using namespace std;

void printNTo1(int n)
{
    if (n >= 1)
    {
        cout << n;
        n != 1 ? cout << " " : cout << "";
        printNTo1(n - 1);
    }
}

int main()
{
    int n;
    cin >> n;

    printNTo1(n);

    return 0;
}