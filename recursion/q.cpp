#include <iostream>

using namespace std;

int sequence(int n, int length) {
    if(n == 1) {
        return length+1;
    }

    if(n % 2 != 0) {
        n = 3*n+1;
        length++;
    }

    if(n % 2 == 0) {
        n = n/2;
        length++;
    }

    return sequence(n, length); 
}

int main()
{
    int n;
    cin>>n;

    cout<<sequence(n, 0);

    return 0;
}