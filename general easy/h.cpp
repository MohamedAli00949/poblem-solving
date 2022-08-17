#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n+1];

    for(int i =1; i<=n; i++) {
        int item;
        cin>>item;

        arr[item] = i;
    }

    for(int i =1;i<=n; i++) {
        cout<<arr[i];

        i == n ? cout<<"\n" : cout<<" ";
    }

    return 0;
}