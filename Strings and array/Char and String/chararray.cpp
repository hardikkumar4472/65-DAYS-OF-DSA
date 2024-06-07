#include<iostream>
using namespace std;
int main(){
    char arr[5]={'c','o','d','e','\0'};
    char arr1[5]={'c','o','d','e'};
    char arr2[100];
cout<<arr<<endl;
cout<<arr1<<endl;

for (int i = 0; i < 4; i++)
{
    cin>>arr2[i];
}
for (int i = 0; i < 4; i++)
{
    cout<<isupper(arr2[i]);
}


return 0;
}