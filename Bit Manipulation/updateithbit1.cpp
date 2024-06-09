#include<iostream>
using namespace std;
int update_ith_bit(int n, int i,int val){
    n=n & ~(1<<i);
    n=n | (val<<i);
    cout<<n<<endl;
}
int main(){
    int num;
    int i;
    cin>>num;
    cin>>i;
    cout<<update_ith_bit(num,i,0);
    cout<<update_ith_bit(num,i,1);

return 0;
}