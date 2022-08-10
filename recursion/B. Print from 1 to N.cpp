#include <iostream>

using namespace std;

void printN (int n, int start) {
    if(start != n+1) {
        cout<<start<<endl;
        printN(n, start+1);
    } 
}

int main() {
    int n;
    cin>>n;

    printN(n, 1);

    return 0;
}