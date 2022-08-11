#include <bits/stdc++.h>
#include <vector>
#include <sstream>

using namespace std;

int convetToNum(char c)
{
    if (c >= '0' && c <= '9')
    {
        return c - '0';
    }
    else
    {
        return c - 'A' + 10;
    }
}

char convertToString(int num)
{
    if (num >= 0 && num <= 9)
    {
        return num + '0';
    }
    else
    {
        return num + 'A' - 10;
    }
}

long long convertStringToNum(string num)
{
    long long newNum = 0;
    stringstream str;
    str << num;
    str >> newNum;

    return newNum;
}

long long convetToBase(string num, long long base)
{
    long long result = 0;
    long long power = 1;

    for (int i = num.size() - 1; i >= 0; i--)
    {
        result += convetToNum(num[i]) * power;
        power *= base;
    }

    return result;
}

char *convetFromBase(long long base, string num, char chars[])
{
    int newNum = convertStringToNum(num);
    int index = 0;

    while (newNum != 0)
    {
        chars[index++] = convertToString(newNum % base);
        newNum /= base;
    }
    chars[index] = '\0';
    reverse(chars, chars + index);

    return chars;
}

int main()
{
    int n;
    cin >> n;

    string num;
    cin >> num;

    long long base;
    cin >> base;

    if (n == 1)
    {
        cout << convetToBase(num, base);
    }
    else
    {
        char chars[100];
        cout<<convetFromBase(base, num, chars);
    }

    return 0;
}