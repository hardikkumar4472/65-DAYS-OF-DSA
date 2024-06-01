#include<iostream>
using namespace std;
void bin_to_dec(int n){
    int pow=1;
    int decnum=0;
    while(n>0){
        int rem=n%10;
        decnum+=rem*pow;
        pow*=2;
        n/=10;
    }
    cout<<decnum;
}
int main(){
    int a;
    cin>>a;
    bin_to_dec(a);
return 0;
}