#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, counter=0;
    cin>>n;

    string lastStr = "";
    for(int i =0; i<n; i++) {
        string str;
        cin>>str;

        if(i == 0) {
            lastStr = str;
            continue;
        }

        if(str[0] == lastStr[1]) {
            counter++;
        }
        lastStr = str;
    }

    cout<<counter+1;

    return 0;
}