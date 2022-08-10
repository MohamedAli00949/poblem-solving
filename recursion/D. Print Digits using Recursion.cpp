#include <iostream>

using namespace std;

void printDigits(string n, int i) {
    if(i >= 0 & i < n.length()) {
        cout<<n[i];
        i == n.length()-1 ? cout<<endl : cout<<" ";
        printDigits(n, i+1);
    }
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        string n;
        cin>>n;
        
        printDigits(n, 0);
    }

    return 0;
}