#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    string f1, f2, l1, l2;
    cin>>f1>>l1;
    cin>>f2>>l2;
    
    if (l1 == l2) {
        cout<<"ARE Brothers";
    } else {
        cout<<"NOT";
    }
    
    return 0;
}