#include <iostream>

using namespace std;

int main() {
    long long a, b, q, result;
    cin>>a>>b>>q;

    result = q % 3;

    if(result == 1) {
        cout<<a;
    } else if(result == 2) {
        cout<<b;
    } else {
        cout<<(a ^ b);
    }
    
    return 0;
}