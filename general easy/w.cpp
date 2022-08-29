#include <bits/stdc++.h>
#include <string>

using namespace std;

int longSequence(string str)
{
    int count = 1;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i + 1] - str[i] != 1)
        {
            break;
        }
        else
        {
            count++;
        }
    }

    return count;
}

int main()
{
    string a, b;

    cin >> a >> b;

    if (a == b)
    {
        cout << -1;
    }
    else if (a.size() > b.size())
    {
        cout << a.size();
    }
    else
    {
        int countA = longSequence(a);
        int countB = longSequence(b);

        // cout<<max(countA, countB);
        cout << b.size();
    }

    return 0;
}