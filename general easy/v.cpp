#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int rate = 0, a[n], b[n];
    for(int i =0;i<n; i++) {
        cin>>a[i]>>b[i];
    }

    for(int i =0;i<n; i++) {
        if(a[i] != b[i]) {
            rate = 1;
            break;
        }

        if(rate == 0 && a[i] > a[i-1] && i != 0) {
            rate = 2;
        }
    }

    rate == 1 ? cout<<"rated" : rate == 2 ? cout<<"unrated" : cout<<"maybe";

    return 0;
}