#include<iostream>
#include<list>
#include<iterator>
using namespace std;
void printlist(list<int> ll){
    list<int>::iterator itr;
        for(itr=ll.begin();itr!=ll.end();itr++){
        cout<<*itr<<"->";
    }
    cout<<"NULL"<<endl;
}
int main(){
    list<int> ll;
    ll.push_back(11);
    ll.push_back(22);
    ll.push_back(33);
    ll.pop_front();
    ll.pop_back();
    printlist(ll);
    cout<<ll.size()<<endl;
    cout<<ll.front()<<endl;
    cout<<ll.back()<<endl;
return 0;
}