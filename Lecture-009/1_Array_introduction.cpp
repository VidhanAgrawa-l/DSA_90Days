#include <iostream>
using namespace std;


// function for array
void print_array(int arr[] ,int size){

    for(int i = 0; i<size; i++ ){
         cout<< arr[i]<<" ";

    }

    cout<<endl<<"print done"<<endl;
}


int main(){

    //accessing an array
    int number[15];
    cout<<"the value at 14 index is: "<<number[14]<<endl;

    //cout <<"the value at 20 index is: "<<number[20]<<endl; --> bcoz 20k ka mobile 10k mai nhi milta

    // initialize the array
    int dost[] = {1,3,5};

    // accessing the element
    cout<<"the value at 2 index is: "<<dost[2]<<endl;

    int third[50] ={3,4,5};

    int n =40;

    //loop se array access
    for(int i = 0;i<n;i++){
        cout<<third[i]<<endl;
    } 

    //initialising all locations with 1 [not possible with below linel]
    int fourth[100] = {1};

    //use of fill_n command --> kitne bhi bade array ko ,koi bhi no. assign kr skte ho 

    //To initialize the array with value'1'.
    fill_n(fourth, 100, 1);

    //To check the array input (kewaal 5 hi kari h print)
    for(int i = 0; i <= 5; i++){
        cout << fourth[i] << endl;

    // function calling
    n=7;
    print_array(dost,1);

    // to know the size / total length of array  --> but u can not know that how many actuall values are their in that array
    int arraysize = sizeof(fourth)/sizeof(int);
    cout<<" Size of fourth is " << arraysize;
    }


}














