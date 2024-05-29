#include<iostream>
using namespace std;
int main(){
    int a=10;
    int b=7;
    //BINARY OPERATOR
    cout<<a+b<<endl;
    cout<<a-b<<endl;
    cout<<a/b<<endl;
    cout<<a%b<<endl;
    cout<<a*b<<endl;
    //UNARY OPERATOR
    cout<<a++<<endl;
    cout<<a<<endl;
    cout<<a--<<endl;
    cout<<++b<<endl;
    cout<<b<<endl;
    cout<<--b<<endl;
    int c=++a;
    int d=a++;
    cout<<c<<endl;
    cout<<d<<endl;

return 0;
}