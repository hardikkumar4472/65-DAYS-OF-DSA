#include<iostream>
using namespace std;
int main(){
    int a=5;
    int *ptr=&a;
    cout<<ptr<<endl;
    ptr++;
    cout<<ptr<<endl;
    ptr--;
    cout<<ptr<<endl;
    cout<<ptr+3<<endl;
return 0;
}