#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, sumA=0, sumB=0;
    cin>>n>>m;

    int a[n], b[m];

    for(int i =0; i< n; i++) {
        cin>>a[i];
        sumA += a[i];
    }

    for(int i =0; i< m; i++) {
        cin>>b[i];
        sumB += b[i];
    }

    sumA == sumB ? cout<<"Yes" : cout<<"No";

    return 0;
}