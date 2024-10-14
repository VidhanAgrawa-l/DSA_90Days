#include <iostream>
#include<queue>
using namespace std;
int main() {
    queue<string> q; // first in first out concept

    q.push ("love");
    q.push ("'Babbar");
    q.push ("Kumar");


    cout<<"Size before pop: " <<q.size() <<endl; // 3
    cout<<"First Element "<<q.front ()<<endl; // love
    q.pop ();
    cout<<"First Element "<<q.front()<<endl; // babbar
    cout<<"Size after pop: " <<q.size()<<endl; // 2
}