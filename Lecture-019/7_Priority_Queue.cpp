#include <iostream>
#include<queue>

using namespace std;
int main() {
    //max heap
    priority_queue<int> maxi;

    //min - heap
    priority_queue<int, vector<int>, greater<int> >mini;

    // randomly input --> pr o/p ->3 2 1 0 
    maxi.push (1); 
    maxi.push (3); 
    maxi.push (2); 
    maxi.push (0);

    cout<<"size→> "<<maxi.size()<<endl;
    
    int n = maxi.size();

    for (int i=0;i<n; i++) {
        cout<<maxi.top()<<" ";
        maxi.pop ();// after each print us value ko hta dega 
    }cout<<endl;


    mini.push (5); 
    mini.push (1); 
    mini.push(0); 
    mini.push(4);
    mini.push (3);

    int m = mini.size();

    for(int i=0;i<m;i++) {
        cout<<mini.top()<<" ";
        mini.pop(); // after each print us value ko hta dega 
    }cout<<endl;


    cout<<"khaali h kya bhai?? →> "<<mini.empty()<<endl;// true / 1
    cout<<"khaali h kya bhai?? →> "<<maxi.empty()<<endl;// true / 1
}