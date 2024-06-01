#include<iostream>
using namespace std;
int find_factorial(int a){
    int product=1;
    for (int i=a;i>=1;i--){
        product*=i;
    }
    cout<<product;
}
int main(){
    int x;
    cout<<"Enter Any Number: ";
    cin>>x;
    find_factorial(x);
return 0;
}