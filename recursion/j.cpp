#include <iostream>

using namespace std;

long long factorial(long long start, long long n, long long result) {
    if(n == start) {
        return result * start;
    }

    return start * factorial(start+1, n, result);
}

int main()
{

    long long n;
    cin>>n;

    cout<<factorial(1, n, 1);

    return 0;
}