#include<iostream>
using namespace std;
int clear_ith_bit(int n, int i){
    int bitmask=~(1<<i);
    return (n&bitmask);
}
int main(){
    int num;
    int i;
    cin>>num;
    cin>>i;
    cout<<clear_ith_bit(num,i);

return 0;
}