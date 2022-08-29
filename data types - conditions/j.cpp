#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;

    if (m % n == 0 || n % m == 0)
        cout<<"Multiples";
    else
        cout<<"No Multiples";

    return 0;
}