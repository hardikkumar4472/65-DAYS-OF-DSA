#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    int And=a&b;
    int Or=a|b;
    int Xor=a^b;
    int comp= ~a;
    cout<<And<<endl;
    cout<<Or<<endl;
    cout<<Xor<<endl;
    cout<<comp<<endl;
return 0;
}