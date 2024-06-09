#include<iostream>
using namespace std;
void odd_or_even(int n){
    if ((n & 1)==0){
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }
}
int main(){
    int num;
    cin>>num;
    odd_or_even(num);

return 0;
}