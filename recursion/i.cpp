#include <iostream>

using namespace std;

string vowel = "aeiou";

bool isVolw(char c) {
    if(c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U') {
        return true;
    }

    return false;
}

int countVolws(string s, int start, int lastCount)
{
    if (start == s.length()-1)
    {
        if(isVolw(s[start])) {
            lastCount++;
        }

        return lastCount;
    }

    if (isVolw(s[start]))
    {
        lastCount++;
    }

    return countVolws(s, start+1, lastCount);
}

int main()
{
    string s;
    getline(cin, s);

    cout<<countVolws(s, 0, 0);

    return 0;
}