#include <iostream>

using namespace std;

int maxNum(int arr[], int n, int start, int max)
{
    max = max > arr[start] ? max : arr[start];
    if (n - 1 == start)
    {
        return max;
    }

    return maxNum(arr, n, start+1, max);
}

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i =0; i<n; i++) {
        cin>>arr[i];
    }

    cout<<maxNum(arr, n, 0, arr[0])<<endl;
    
    return 0;
}