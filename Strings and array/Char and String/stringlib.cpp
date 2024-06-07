#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    string str1;
    cin>>str;
    getline(cin,str1,'$');
    cout<<str<<endl;
    cout<<str1<<endl;
    cout<<str1[0]<<endl;
    cout<<str1[1]<<endl;
    cout<<str1[2]<<endl;

return 0;
}