#include <iostream>
#include <math.h>
 
using namespace std;
 
int main()
{
    long long x, y, z, max, min;
    cin>>x>>y>>z;
 
    if (x >= y & x >= z) {
        max = x;
    } else if (y >= x & y >= z) {
        max = y;
    } else {
        max = z;
    }
    
    if (x <= y && x <= z) {
        min = x;
    } else if (y <= x & y <= z) {
        min = y;
    } else {
        min = z;
    }
    
    cout<<min<< " " << max; 
 
    return 0;
}