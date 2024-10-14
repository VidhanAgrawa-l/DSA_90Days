#include <iostream>
using namespace std;

void insertionSort(int arr[], int size) {
    for(int i = 1; i < size; i++) {
        int temp = arr[i];
        int j = i - 1;

        // Shift elements of arr[0..i-1], that are greater than temp, to one position ahead
        while(j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }

        // Insert the temp element into its correct position
        arr[j + 1] = temp;
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, size);

    cout << "Sorted array: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
