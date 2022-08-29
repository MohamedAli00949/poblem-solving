#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, counter = 0;
    cin>>n>>k;

    string nums = "0123456789";
    for(int i =0; i<n; i++) {
        int numsInK = 0;
        string num;
        cin>>num;

        for(int j= 0; j<=k; j++) {
            if(num.find(nums.substr(j, 1)) != string::npos) {
                numsInK++;
            }
        }

        if(numsInK == k+1) {
            counter++;
        }
    }

    cout<<counter;

    return 0;
}