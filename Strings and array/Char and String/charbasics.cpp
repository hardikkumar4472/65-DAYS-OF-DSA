#include<iostream>
using namespace std;
int main(){
    char a='a';
    cout<<a<<endl;
    for (char i='a';i<='z';i++){
        cout<<i<<" ";
    }
    cout<<endl;
    for (char i='a';i<='z';i++){
        cout<<(int)i<<" ";
    }
    cout<<endl;
    for (char i='A';i<='Z';i++){
        cout<<i<<" ";
    }
    cout<<endl;
    for (char i='A';i<='Z';i++){
        cout<<(int)i<<" ";
    }
    cout<<endl;
return 0;
}