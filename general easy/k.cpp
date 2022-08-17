#include <bits/stdc++.h>

using namespace std;

int fibon(int num);
bool isPrime(int num);

int main()
{
    int t;
    cin>>t;

    while(t--) {
        int num;
        cin>>num;

        int fibonNum = fibon(num);

        isPrime(fibonNum) ? cout<<"prime"<<endl : cout<<"not prime"<<endl;
    }

    return 0;
}

int fibon(int num) {
    if(num == 1) {
        return 0;
    }

    if(num == 2) {
        return 1;
    }

    return fibon(num-1) + fibon(num-2);
}

bool isPrime(int num) {
    bool result = true;

    if(num == 1 || num == 0) {
        return false;
    }

    for(int i =2; i<= sqrt(num); i++) {
        if(num % i == 0) {
            result = false;
            break;
        }
    }

    return result;
}