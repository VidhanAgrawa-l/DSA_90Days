#include <iostream>
using namespace std;

void SwapAlternate(int arr[],int size){
    int start = 0;
    int end = 1;

    while(end < size) {//while loop ki condition ka shyan rkhna hai bss,wrna similar to normal reverse 
        swap(arr[start], arr[end]); // swap is a inbuilt functn
        start = start + 2;
        end = end + 2;
    }   


}

void PrintArray(int arr[],int size){

    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}




int main(){

    int array[10] = {1,2,3,4,5,6,7,8,9,10};

    cout<<"print array before swap"<<endl;
    PrintArray(array,10);

    SwapAlternate(array,10);

    cout<<"print array after swap"<<endl;
    PrintArray(array, 10);

}