#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, x, distress = 0;
    cin>>n>>x;

    for(long long i =0; i<n; i++) {
        int num;
        char sign;

        cin>>sign>>num;

        if(sign == '+') {
            x+= num;
        } else {
            if(x - num >= 0) {
                x -= num;
            } else {
                distress++;
            }
        }

    }

    cout<<x<<" "<<distress;
    return 0;
}