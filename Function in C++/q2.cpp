#include<iostream>
using namespace std;
void check_even_or_odd(int a){
    if (a%2==0){
        cout<<"Even"<<endl;
    }
    else{
        cout<<"Odd"<<endl;
    }
}
int main(){
    int a;
    cout<<"Enter any Integer to check Whether it is Even or Odd: ";
    cin>>a;
    check_even_or_odd(a);
return 0;
}