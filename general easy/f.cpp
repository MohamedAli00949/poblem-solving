#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;

    int last = 1;
    for(int i =1; i<=n; i++) {
        for(int j =1; j<=m; j++) {
            if(i % 2 == 0 && j != last) {
                cout<<".";
            } else {
                cout<<"#";
                if(j == m && i % 2 != 0) {
                    if(last == 1) {
                        last = m;
                    } else {
                        last = 1;
                    }
                }
            }
        }
        cout<<endl;
    }

    return 0;
}