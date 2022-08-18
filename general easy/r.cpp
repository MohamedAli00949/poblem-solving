#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int max = 0, maxPos=0, min=101, minPos=0;
    for(int i = 1; i<=n; i++) {
        int num;
        cin>>num;

        if(num > max) {
            max = num;
            maxPos  = i;
        }

        if(num <= min) {
            min = num;
            minPos = i;
        }
    }

    if(maxPos > minPos) {
        cout<<(maxPos -1) + (n - minPos-1);
    } else {
        cout<<(maxPos -1) + (n - minPos);
    }

    return 0;
}