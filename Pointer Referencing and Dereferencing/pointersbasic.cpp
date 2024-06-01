#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int *ptr=&a;
    cout<<&a<<"="<<ptr<<endl;
    int **pptr=&ptr;
    cout<<&ptr<<"="<<pptr<<endl;
return 0;
}