#include <iostream>
using namespace std;
// leetcode ->724 and same as leetcode ->1991
// The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right.

int pivotElement(int arr[], int size) {
    int sum[100] = {0}; // jaise sum = 0 krte hai koi bhi summation ke question mai ,waise hi array ke time sum ko zero se initialize kra hai

    for(int i=0; i<size; i++) {   // for loop ->for finding sum at every index of all element in the array 
        sum[i+1] = sum[i] + arr[i];
    }

    for(int i=0; i<size; i++) { //for loop -> to devide left sum value and right sum value
        int left = sum[i];
        int right = sum[size] - sum[i+1];

        if(left == right) {  // return ki condition ,if sum of left = sum of right 
            return arr[i];
        }
    }

    return -1;
}

int main() {
    int n, element;
    int arr[100];

    cout<<"Enter the size of the array : ";
    cin>>n;

    cout<<"Enter the elements of tha array : ";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    int pivot = pivotElement(arr, n);

    cout<<"Pivot element of the array : "<<pivot;

    return 0;
}
