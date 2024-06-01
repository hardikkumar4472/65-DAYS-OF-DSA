#include<iostream>
using namespace std;
//PASS BY VALUE
void changeA(int param){
    param=20;
    cout<<param<<"\n";
}
//PASS BY REFERENCE USING POINTER;
void changeA(int *ptr){
    *ptr=20;
    cout<<*ptr<<"\n";
}
int main(){
    int a=10;
    changeA(&a);
    cout<<a<<"\n";
return 0;
}