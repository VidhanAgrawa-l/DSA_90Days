#include <iostream>
using namespace std;


// only additonal thing is -> totOccurrences = last - first + 1;

int firstPosition(int arr[], int size, int key) {
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;

    int ans = -1;

    while(start <= end) {
        if(arr[mid] == key) {
            ans = mid;
            end = mid - 1;
        } else if(key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }

    return ans;
}

int lastPosition(int arr[], int size, int key) {
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;

    int ans = -1;

    while(start <= end) {
        if(arr[mid] == key) {
            ans = mid;
            start = mid + 1;
        } else if(key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }

    return ans;
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

    cout<<"Enter the element to search for : ";
    cin>>element;
    
    int first = firstPosition(arr, n, element);
    int last = lastPosition(arr, n, element);
    int totOcc;

//  Suppose you have an array: {2, 4, 4, 4, 5, 7} and you are searching for the element 4.

// firstPosition would return 1 (index of the first occurrence of 4).
// lastPosition would return 3 (index of the last occurrence of 4).
// The total number of occurrences is 3 - 1 + 1 = 3.

// However, if the element were 6 (which is not in the array):

// firstPosition would return -1.
// lastPosition would return -1.
// Since either or both are -1, totOcc is set to 0, indicating that there are no occurrences of 6 in the array.

    if(first == -1 || last == -1) {
        totOcc = 0;
    } else {
        totOcc = last - first + 1;
    }

    cout<<"Total number of occurrences : "<<totOcc<<endl;

    return 0;
}