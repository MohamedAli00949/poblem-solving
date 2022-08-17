// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin>>str;

    if(str.size() == 1) {
        cout<<str;
    } else {
        vector<int> nums;
        for(int i =0; i<str.size(); i++) {
            if(str[i] != '+') {
                nums.push_back(int(str[i] - '0'));
            }

            if(str[i+1] == '+')
                i++;
        }

        sort(nums.begin(), nums.end());

        int last=0;
        for(int i =0; i<nums.size(); i++) {
            cout<<nums[i];
            if(i != nums.size()-1) {
                cout<<"+";
            }
        }
    }
    return 0;
}