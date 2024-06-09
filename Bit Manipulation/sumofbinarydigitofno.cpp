#include<iostream>
using namespace std;
int countsetbits(int num){
    int sum=0;
    while(num>0){
        int last_digit=num&1;
        sum+=last_digit;
        num=num>>1;
    }
    cout<<sum<<endl;
    return sum;
}
int main(){
    int num;
    cin>>num;
    countsetbits(num);
return 0;
}