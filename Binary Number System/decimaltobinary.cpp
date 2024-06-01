#include<iostream>
using namespace std;
void dec_to_bin(int n){
    int pow=1;
    int binum=0;
    while(n>0){
        int rem=n%2;
        binum+=rem*pow;
        n/=2;
        pow*=10;
    }
    cout<<binum;
}
int main(){
    int a;
    cin>>a;
    dec_to_bin(a);
return 0;
}