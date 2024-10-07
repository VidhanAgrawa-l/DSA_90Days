#include<iostream>
using namespace std;


void update(int array[],int n){

    cout<<"enter inside update function"<<endl;

    //updating array's first element
    array[0] = 120;

    for(int i=0; i<3; i++) {
        cout<<array[i]<<" ";
    }
    cout<<endl;

    cout<<"exit form update function"<<endl;


}



int main(){

    int arr[3] = {1,2,3};

    update(arr,3);

    cout<<"inside the main function"<<endl;

    for(int i=0; i<3; i++) {
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    return 0;    

}


