#include <bits/stdc++.h>

using namespace std;

int main()
{
    int r, n;
    cin>>r>>n;

    int rows[r]= {0};
    int cols[n] = {0};

    for(int i =0; i<r; i++) {
        string row;
        cin>>row;

        for(int j = 0; j<n; j++) {
            if(row[j] == 'S') {
                rows[i] = 1;
                cols[j] = 1;
            }
        }
    }

    int counter = 0;

    for(int i =0; i<r; i++) {
        for(int j =0;j<n; j++) {
            if(cols[j] == 0 || rows[i] == 0) {
                counter++;
            }
        }
    }

    cout<<counter;

    return 0;
}