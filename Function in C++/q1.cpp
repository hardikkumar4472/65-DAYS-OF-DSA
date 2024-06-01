#include<iostream>
using namespace std;
int sum(int a,int b){
    cout<<a+b<<endl;
}
double sum(double a,double b){
    cout<<a+b<<endl;
}
int main(){
    sum(1,2);
    sum(1.5,2.5);
    
return 0;
}