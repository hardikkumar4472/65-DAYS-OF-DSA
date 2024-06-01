#include<iostream>
using namespace std;
void check_prime_number(int a){
    int count=0;
    for (int i=2;i<a;i++){
        if (a%i==0){
            count=1;
        }
    }
    if (count!=0){
        cout<<"Not a Prime Number";
    }
    else{
        cout<<"Prime Number";
    }
}
int main(){
    int a;
    cin>>a;
    check_prime_number(a);
return 0;
}