#include <iostream>
#include <list>
using namespace std;

int main() {
    int basic[3] = {1, 2, 3};

    list<int> l;

    l.push_back(1);
    l.push_back(2);

    l.push_front(3);
    l.push_front(4);

    int size = l.size();

    for(int i:l) {
        cout<<i<<" ";
    }
    cout<<endl;

    l.erase(l.begin());// erase first element

    cout<<"After erase operation : ";
    for(int i:l) {
        cout<<i<<" ";
    }
    cout<<endl;

    // l.pop_back() ;

    // for(int i:l) {
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    // l.pop_front();

    // for(int i:l) {
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    cout<<"Size of list = "<<l.size()<<endl;

    // Copying list content
    list<int> l1(l);            // l1 mai l ka material aa jayega

    cout<<"New list : ";
    for(int i:l1) {
        cout<<i<<" ";
    }
    cout<<endl;

    // Initialising new list
    list<int> l2(10, 20);        // new list having- 20 vo bhi 10X_times

    cout<<"Newly initialised list : ";
    for(int i:l2) {
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}