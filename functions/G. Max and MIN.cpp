#include <iostream>

using namespace std;

void minMax (int arr[], int n, int &min, int &max);

int main() {
    int n, min, max;
    cin>>n;

    int *arr = new int[n];

    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    minMax(arr, n, min, max);

    cout<<min<<" "<<max;

    return 0;
}

void minMax (int arr[], int n, int &min, int &max) {
    min = arr[0];
    max = arr[0];

    for(int i=1; i<n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }

        if(arr[i] > max) {
            max = arr[i];
        }
    }
}