#include<iostream>
using namespace std;
int main(){
    int a=10;
    int b=7;
    //Binary;
    cout<<((a>b)&&(a<b))<<endl;
    cout<<((a>b)||(a<b))<<endl;
    //Unary;
    cout<<(!a)<<endl;
    cout<<(!b)<<endl;
    return 0;
}