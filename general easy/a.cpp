#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string str)
{
    bool result = true;
    int size = str.size();

    for (int i = 0; i <= size / 2; i++)
    {
        if (str[i] == str[size - 1 - i] || (str[i] == '?' && str[size - 1 - i] != '?') || (str[i] != '?' && str[size - 1 - i] == '?') || str == "?")
        {
            result = true;
        }
        else
        {
            result = false;
            break;
        }
    }

    return result;
}

int main()
{
    string str;
    cin >> str;

    int size = str.size();

    if (str != "?")
    {
        if (isPalindrome(str))
        {
            for (int i = 0; i <= size / 2; i++)
            {
                if (str[i] == '?' && str[size - 1 - i] != '?')
                {
                    str[i] = str[size - 1 - i];
                }
                else if (str[size - 1 - i] == '?' && str[i] != '?')
                {
                    str[size - 1 - i] = str[i];
                }
                else if (str[size - 1 - i] == '?' && str[i] == '?')
                {
                    str[size - 1 - i] = 'a';
                    str[i] = 'a';
                }
            }

            cout << str;
        }
        else
        {
            cout << -1;
        }
    }
    else
    {
        cout << "a";
    }

    return 0;
}
