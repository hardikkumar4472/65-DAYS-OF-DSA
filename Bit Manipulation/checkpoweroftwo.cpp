#include<iostream>
using namespace std;
void power_of_two(int n){
    if ((n & (n-1))==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
int main(){
    int num;
    cin>>num;
    power_of_two(num);

return 0;
}