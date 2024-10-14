#include <iostream>
#include <deque>
using namespace std;

int main() {
    int basic[3] = {1, 2, 3};

    deque<int> d;

    d.push_back(1);
    d.push_back(2);

    d.push_front(3);
    d.push_front(4);

    for(int i:d) {
        cout<<i<<" ";
    }
    cout<<endl;

    // d.pop_back() ;      --> remove element form back

    // for(int i:d) {
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    // d.pop_front();      --> remove element form starting

    // for(int i:d) {
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    cout<<"Size of deque = "<<d.size()<<endl;

    cout<<"Element at second index = "<<d.at(2)<<endl;

    cout<<"First element = "<<d.front()<<endl;

    cout<<"Last element = "<<d.back()<<endl;

    cout<<"Empty or not : "<<d.empty()<<endl;

    d.erase(d.begin(), d.begin()+1); // to delete first element,(form where - to where)
                                     // erase ke baad ,size(element) remove hote hai ,memory nii
    
    for(int i:d) {
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}