#include <iostream>
using namespace std;

void OptimizeBubbleSort(int arr[], int size) {
    for(int i=1; i<size; i++) {
        bool flag = false;

        for(int j=0; j<size-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                flag = true;
            }
        }

        if(!flag) {
            return;
        }

    }
}
