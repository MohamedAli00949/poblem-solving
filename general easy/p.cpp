#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, crimes = 0, officers = 0, counter = 0;
    cin>>n;

    for(int i =0;i <n; i++) {
        int num;
        cin>>num;

        if(num == -1) {
            if(officers > 0) {
                //cout<<officers<<endl;
                officers -= 1;
            } else {
                counter++;
                //cout<<num<<" "<<officers<<endl;
            }
        } else {
            officers += num;
            //cout<<officers<<endl;
        }
    }

    cout<<counter;

    return 0;
}