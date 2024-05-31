#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cin>>n;
    while(n!=0){
        int rem=n%10;
        if (rem%2!=0){
        sum+=rem;
        n/=10;
    }
    cout<<sum;
    }
return 0;
}