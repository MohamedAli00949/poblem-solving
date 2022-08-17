#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;

    int counter = 0;
    for (int i = 0; i < t.size(); i++)
    {
        if (s[counter] == t[i])
        {
            counter++;
        }
    }

    cout << counter + 1;

    return 0;
}