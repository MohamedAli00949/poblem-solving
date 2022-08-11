#include <iostream>
#include <vector>

using namespace std;

/**
 * @brief Enter your num and then for loop will start and this loop has other loop to count the times that num can be divided by it. 
 * 
 * @return int 
 */

int main()
{
    long long n;
    cin >> n;

    bool hasOtherFactors = false;

    for (int i = 2; i <= n / 2; i++)
    {
        int counter = 0;
        /*
            this loop for count times that can make num divided by i;
        */
        while(n % i == 0) {
            counter++;
            n /= i;
        }

        if(counter > 0 && hasOtherFactors) {
            cout<<"*";
        }

        if(counter > 0) {
            cout<<"("<<i<<"^"<<counter<<")";
            hasOtherFactors = true;
        }

        if(n == 1) {
            break;
        }
    }

    if(n > 1 && hasOtherFactors) {
        cout<<"*";
    }

    if(n > 1) {
        cout<<"("<<n<<"^"<<1<<")";
    }
    
    return 0;
}