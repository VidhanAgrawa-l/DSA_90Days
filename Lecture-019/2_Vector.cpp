#include <iostream>
#include <vector>
using namespace std;

int main() {
    int basic[3] = {1, 2, 3};

    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    int size = v.size(); 

    for(int i=0; i<size; i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    cout<<"Size of vector = "<<v.size()<<endl; // 5

    cout<<"Capacity of vector = "<<v.capacity()<<endl; // 8 , 4 ke baad double

    cout<<"Element at second index = "<<v.at(2)<<endl;// 3

    cout<<"Empty or not = "<<v.empty()<<endl;// (bool)0

    cout<<"First element = "<<v.front()<<endl;// 1

    cout<<"Last element = "<<v.back()<<endl;//5


    cout<<"\nBefore pop operation : ";
    for(int i:v) {
        cout<<i<<" "; // 1 2 3 4 5 
    }

    v.pop_back();
    
    cout<<"\nAfter pop operation : ";
    for(int i:v) {
        cout<<i<<" ";// 1 2 3 4 
    }

    cout<<"\n\nBefore clear operation : Size = "<<v.size()<<endl; // 4

    v.clear(); // when we use clear operation -> size zero hota hai, capacity(memory) nhi

    cout<<"After clear operation : Size = "<<v.size()<<endl; // 0

    vector<int> v1(5, 1); // vector of size=5 & all element=1
    cout<<"\nPrinting new vector : ";
    for(int i:v1) {// way to use vector 
        cout<<i<<" ";// 1 1 1 1 1 

    // vector<int> last(v1);                     // v1 vector is imported in last vector
    // cout<<"\nPrinting last vector : " ;
    // for(int i:v1){                      
    //     cout<<i<<" ";
    // }
    }

    return 0;
}