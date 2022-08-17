#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    long long arr[t];
    for(int i =0; i<t; i++) {
        cin>>arr[i];
    }


    long long sum1=0, sum2=0, max= 0, start=0, end = t-1;
    for(int i=0; i<t; i++) {
        if(arr[start] >= arr[end]) {
            max = arr[start];
            start++;
        } else {
            max = arr[end];
            end--;
        }

        if(i % 2 == 0) {
                sum1 += max;
        } else {
                sum2 += max;
        }
    }

    cout<<sum1<<" " <<sum2;

    return 0;
}
