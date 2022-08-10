#include <iostream>

using namespace std;

void nTimes(int n, char c);

int main()
{
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        char c;
        cin>>c;

        nTimes(n, c);
    }

    return 0;
}

void nTimes(int n, char c)
{
    for(int i=0; i<n; i++) {
        cout<<c;
        i == n-1 ? cout<<endl : cout<<" ";
    }
}