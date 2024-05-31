#include<iostream>
using namespace std;
int main(){
    int n;
    int num=1;
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            cout<<num++<<" ";
        }
        cout<<endl;
        
    }
    
return 0;
}