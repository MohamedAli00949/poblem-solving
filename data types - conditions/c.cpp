#include <iostream>

using namespace std;

int main()
{
    long long num1, num2, summition, multiplication, subtraction;

    cin>> num1 >> num2;

    summition = num1 + num2;
    multiplication = num1 * num2;
    subtraction = num1 - num2;

    cout << num1 << " + " << num2 << " = " <<summition << endl;
    cout << num1 << " * " << num2 << " = " <<multiplication << endl;
    cout << num1 << " - " << num2 << " = " <<subtraction << endl;

    return 0;
}