#include<iostream>
using namespace std;
int clear_i_bits(int n, int i){
    int bitmask=(~0)<<i;
    n=n&bitmask;
    cout<<n;
}
int main(){
    int num;
    int i;
    cin>>num;
    cin>>i;
    clear_i_bits(num,i);

return 0;
}