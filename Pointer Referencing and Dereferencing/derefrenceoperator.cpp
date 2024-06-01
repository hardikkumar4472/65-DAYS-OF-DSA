#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int *ptr=&a;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<&a<<endl;
    cout<<*(&a)<<endl;
return 0;
}