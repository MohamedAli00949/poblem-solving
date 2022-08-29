#include <iostream>

using namespace std;
 
int main()
{
    char a, b;
    cin>>a;
    
    if(a >= 65 & a < 97) {
        b = a + 32;
    } else {
        b = a - 32;
    }
    
    cout<<b;
    
    return 0;
}