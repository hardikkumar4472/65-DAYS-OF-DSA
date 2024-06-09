#include<iostream>
using namespace std;
int set_ith_bit(int n, int i){
    int bitmask=1<<i;
    return (n|bitmask);
}
int main(){
    int num;
    int i;
    cin>>num;
    cin>>i;
    cout<<set_ith_bit(num,i);

return 0;
}