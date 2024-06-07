#include<iostream>
using namespace std;
int main(){
     char arr2[100];
     for (int i = 0; i < 4; i++)
    {
        cin>>arr2[i];
    }
    for (int i = 3; i>=0; i--)
    {
        cout<<arr2[i];
    }
return 0;
}