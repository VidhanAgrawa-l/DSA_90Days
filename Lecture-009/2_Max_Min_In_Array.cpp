#include <iostream>
#include <limits.h>
using namespace std;
                                          //   USING INBUILT FUNCTION --max
 
int GetMax(int array[],int n){            //  int GetMax(int array[],int n){ 
                                          //    
    int max = INT_MIN;                    //     int maxi = INT_MIN;
                                          //
    for(int i = 0; i<n ; i++){            //     for(int i = 0; i<n ; i++){
                                          //
        if(array[i] > max){               //        maxi = max(maxi, num[il);
            max = array[i];               //
                                          //
        }                                 //
    }                                     //
    return max;                           //    return maxi;
}                                         //

int GetMin(int array[],int n){

    int min = INT_MAX;

    for(int i = 0; i<n ; i++){

        if(array[i] < min){
            min = array[i];

        }
    }
    return min;
}


int main(){

    int size;
    cout<<"enter the size of array: "<<endl;
    cin >>size;
    int arr[100];

    // taking input in array
    for(int i = 0; i<size; i++){
        cin>>arr[i];

    }
    cout<<"the min no. in array is: "<<GetMin(arr,size)<<endl;
    cout<<"the max no. in array is: "<<GetMax(arr,size)<<endl;
    
}























































