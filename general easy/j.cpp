#include <bits/stdc++.h>

using namespace std;

int main()
{
    int luckyNums[14] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    int n;
    cin>>n;

    if(n % 7 == 0 || n % 4 == 0) {
        cout<<"YES";
        return 0;
    } else {
        string num = to_string(n);

        bool isLucky = false;

        for(int i =0; i<14; i++) {
            if(n % luckyNums[i] == 0) {
                isLucky = true;
                break;
            }
        }

        isLucky ? cout<<"YES" : cout<<"NO";
    }

    return 0;
}