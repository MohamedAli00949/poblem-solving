#include <iostream>

using namespace std;

void printRecursion(int n)
{
    if (n >= 1)
    {
        cout << "I love Recursion" << endl;
        printRecursion(n-1);
    }
}

int main()
{
    int n;
    cin >> n;

    printRecursion(n);

    return 0;
}