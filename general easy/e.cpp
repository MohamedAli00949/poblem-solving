#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin>>n;

    long long counter=0;

    for(int i =0; i<n; i++) {
        int p, q;
        cin>>p>>q;
        if(q-p >= 2) {
            counter++;
        }
    }

    cout<<counter;

    return 0;
}