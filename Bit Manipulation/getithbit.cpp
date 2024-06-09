#include<iostream>
using namespace std;
int get_ith_bit(int n, int i){
    int bitmask=1<<i;
    if ((n & bitmask)==0){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){
    int num;
    int i;
    cin>>num;
    cin>>i;
    cout<<get_ith_bit(num,i);

return 0;
}