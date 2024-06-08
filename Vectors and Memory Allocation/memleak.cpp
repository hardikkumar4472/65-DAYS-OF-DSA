#include<iostream>
using namespace std;
int* func(){
    int *ptr=new int;
    *ptr=1200;
    cout<<"Ptr points to "<<*ptr<<endl;
    return ptr;
}
int main(){
int *x=func();
cout<<*x<<endl;
return 0;
}