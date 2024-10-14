#include <iostream>
using namespace std;

void insertionSort(int arr[], int size) {
    for(int i=1; i<size; i++) {
        int temp = arr[i];
        int j;

        for(j=i-1; j>=0; j--) {
            if(arr[j] > temp) {
                arr[j+1] = arr[j];
            } else {
                break;
            }
        }

        arr[j+1] = temp;
    }
}

