#include <bits/stdc++.h>
#include <vector>
#include <sstream>

using namespace std;

long long convetString(string num)
{
    long long num2 = 0;
    stringstream str;
    str << num;
    str >> num2;

    return num2;
}

string multibly(string num1)
{
    string num2 = "9999";

    int len1 = num1.size();
    int len2 = num2.size();
    if (len1 == 0 || len2 == 0)
        return "0";

    // will keep the result num in vector in reverse
    vector<int> result(len1 + len2, 0);

    // two indexes for position in result
    int i_n1 = 0;
    int i_n2 = 0;

    // go from right to left in num1
    for (int i = len1 - 1; i >= 0; i--)
    {
        int carry = 0;
        // define the digit in num1
        int n1 = num1[i] - '0';

        // make start position in num to equal to zero after every multiplication of a digit in num2
        i_n2 = 0;

        // go from right to left in num2
        for (int j = len2 - 1; j >= 0; j--)
        {
            // define the digit in num2
            int n2 = num2[j] - '0';

            // Multiply with a current digit of num1 and a current digit of num2 then, add result to previously stored result at current position.
            int sum = n1 * n2 + result[i_n1 + i_n2] + carry;

            // carry for next intration
            carry = sum / 10;

            // store result
            result[i_n1 + i_n2] = sum % 10;

            i_n2++;
        }

        // store carry in next cell in result
        if (carry > 0)
            result[i_n1 + i_n2] += carry;

        // To shift position to left after every multiplication of a digit in num1.
        i_n1++;
    }

    // ignore '0's from the right
    int i = result.size() - 1;
    while (i >= 0 && result[i] == 0)
        i--;

    // If all were '0's - means either both or
    // one of num1 or num2 were '0'
    if (i == -1)
        return "0";

    // generate the result string
    string s = "";

    while (i >= 0)
        s += std::to_string(result[i--]);

    return s;
}

string summition(string num1)
{
    string num2 = "9999";
    int len1 = num1.length();
    int len2 = num2.length();

    if (len1 > len2)
    {
        swap(num1, num2);
        int temp = len1;
        len1 = len2;
        len2 = temp;
    }

    string result = "";

    // reverse two strings
    reverse(num1.begin(), num1.end());
    reverse(num2.begin(), num2.end());

    int carry = 0;
    for (int i = 0; i < len1; i++)
    {
        int sum = ((num1[i] - '0') + (num2[i] - '0') + carry);
        result.push_back(sum % 10 + '0');
        carry = sum / 10;
    }

    // Add remaining digits of larger number
    for (int i = len1; i < len2; i++)
    {
        int sum = ((num2[i] - '0') + carry);
        result.push_back(sum % 10 + '0');
        carry = sum / 10;
    }

    if(carry) {
        result.push_back(carry + '0');
    }

    // reverse resultant string
    reverse(result.begin(), result.end());

    return result;
}

int main()
{
    string num;
    cin >> num;

    cout << summition(num) << endl;
    cout << multibly(num) << endl;

    return 0;
}