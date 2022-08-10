#include <iostream>
 
using namespace std;
 
void print (int num1) {
    for(int i = 1; i<=num1; i++) {
        cout<<i;
        if(i != num1) {
            cout<<" ";
        }
    }
}
 
int main(){
    
    int num1;
    cin>>num1;
    
    print(num1);
    
    return 0;
}