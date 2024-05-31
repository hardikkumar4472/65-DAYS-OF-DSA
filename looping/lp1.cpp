#include<iostream>
using namespace std;
int main(){
    int a;
    int sum=0;
    int prod=1;
    cin>>a;
    for (int i=a;i>0;i--){
        prod*=i;
    }
    cout<<prod;
return 0;
}