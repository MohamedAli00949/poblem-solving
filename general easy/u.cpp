#include <bits/stdc++.h>

using namespace std;

int main()
{
    string num;
    cin>>num;

    long long intNum = stoi(num);

    string num2 = num;

    num.erase(num.size() -1, 1);
    num2.erase(num2.size() -2, 1);

    cout<<max(intNum, max((long long)stoi(num), (long long)stoi(num2)));

    return 0;
}
