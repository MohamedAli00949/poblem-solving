#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
    int n;

    cin>>n;

    int first = 0, second = 0, third = 0, fArr[5001], sArr[5001], tArr[5001];

    for(int i =1; i<=n; i++) {
        int num;
        cin>>num;
        if(num == 1) {
            fArr[first] = i;
            first++;
        } else if(num == 2) {
            sArr[second] = i;
            second++;
        } else {
            tArr[third] = i;
            third++;
        }
    }

    int teams = min(first, min(second, third));

    cout<<teams<<endl;
    for(int i =0; i<teams; i++) {
        cout<<fArr[i]<<" "<<sArr[i]<<" "<<tArr[i]<<endl;
    }

    return 0;
}