#include <iostream>
using namespace std;

int firstPosition(int arr[], int size, int key) {
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;

    int save = -1;

    while(start <= end) {
        if(arr[mid] == key) {
            save = mid; // save = arr[mid] mat kr dean guru, index save krna hai,index ki value nhi
            end = mid - 1;
        } else if(key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }

    return save;
}

int lastPosition(int arr[], int size, int key) {
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;

    int save = -1;

    while(start <= end) {
        if(arr[mid] == key) {
            save = mid;
            start = mid + 1;
        } else if(key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }

    return save;
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

    cout<<"First position : "<<first<<endl;
    cout<<"Last position : "<<last<<endl;

    return 0;
}