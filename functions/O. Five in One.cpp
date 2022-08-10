#include <bits/stdc++.h>
#include <vector>

using namespace std;

bool isPrime(int num)
{
    if (num == 1 || num == 0)
    {
        return false;
    }

    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int divisors(int num)
{
    int counter = 0;

    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            counter++;
        }
    }

    return counter;
}

bool isPalindrome(int num)
{
    bool palindrome = true;
    int lastNum, reverse = 0, digit;

    lastNum = num;

    while (num > 0)
    {
        digit = num % 10;
        reverse = (reverse * 10) + digit;
        num = num / 10;
    }

    if (reverse == lastNum)
    {
        palindrome = true;
    }
    else
    {
        palindrome = false;
    }

    return palindrome;
}

int main()
{
    int n;
    cin >> n;

    int arr[n], min, max, primeCount = 0, palindromeCount = 0, divisorsCount, maxDivisors = 1, maxDivisorsIndex = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);
    max = arr[n - 1];
    min = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (isPrime(arr[i]))
        {
            primeCount++;
        }

        if (isPalindrome(arr[i]))
        {
            palindromeCount++;
        }

        int numDivisors = divisors(arr[i]);

        if (i == 0)
        {
            maxDivisors = numDivisors;
            maxDivisorsIndex = i;
        }
        else
        {
            if (maxDivisors <= numDivisors)
            {
                maxDivisorsIndex = i;
                maxDivisors = numDivisors;
            }
        }
    }

    cout << "The maximum number : " << max << endl;
    cout << "The minimum number : " << min << endl;
    cout << "The number of prime numbers : " << primeCount << endl;
    cout << "The number of palindrome numbers : " << palindromeCount << endl;
    cout << "The number that has the maximum number of divisors : " << arr[maxDivisorsIndex] << endl;

    return 0;
}