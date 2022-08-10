#include <iostream>
#include <vector>

using namespace std;

bool isOdd (int num) {
    if (num %2 != 0) {
        return true;
    }

    return false;
}

bool isPalindrome(int num) {
    bool palindrome = true;
    vector<int> binaryNum;

    int lastNum = num, itemsNum=0;

    while (lastNum != 0) {
        binaryNum.push_back(lastNum % 2);
        lastNum = lastNum / 2;
        itemsNum++;
    }

    /*
        this loop for check the num if it's palindrome.
    */
    for(int i=0, j=itemsNum-1; i<itemsNum, j>=0; i++, j--) {
        if(binaryNum[i] != binaryNum[j]) {
            palindrome = false;
            break;
        }
    }

    return palindrome;
}

int main() {
    int num;
    cin>>num;

    if(isOdd(num)) {
        isPalindrome(num) ? cout<<"YES" : cout<<"NO";
    } else {
        cout<<"NO";
    }

    return 0;
}