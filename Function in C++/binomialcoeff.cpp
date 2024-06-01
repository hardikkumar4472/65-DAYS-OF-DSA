#include<iostream>
using namespace std;
int find_factorial(int a){
    int product=1;
    for (int i=a;i>=1;i--){
        product*=i;
    }
    return product;
}
int result (int n,int r){
    int x=find_factorial(n);
    int y=find_factorial(r);
    int z=find_factorial(n-r);
    int final_value=x/(y*z);
    cout<<final_value<<endl;
}
int main(){
    int n;
    int r;
    cin>>n;
    cin>>r;
    result(n,r);
return 0;
}