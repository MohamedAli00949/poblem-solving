#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin >> str;

    char chars[26] = {
        'a', 'b', 'c', 'd', 'e', 'f',
        'g', 'h', 'i', 'j', 'k', 'l',
        'm', 'n', 'o', 'p', 'q', 'r',
        's', 't', 'u', 'v', 'w', 'x',
        'y', 'z'},
         pointer = 'a';

    int counter = 0;
    for (int i = 0; i < str.size(); i++)
    {
        int result = abs(str[i] - pointer);

        if (result <= 13)
        {
            counter += result;
        }
        else
        {
            counter += (26 - result);
        }
        pointer = str[i];
    }

    cout << counter << endl;

    return 0;
}