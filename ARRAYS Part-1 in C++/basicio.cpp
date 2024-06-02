#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter Size Of Array: ";
    cin>>a;
    int arr[a];
    cout<<"Enter Values To Add in Array: ";
    for (int i=0;i<a;i++){
        cin>>arr[i];
    }
    cout<<"Required Array Is :- \n";
    for (int i=0;i<a;i++){
        cout<<arr[i]<<" ";
    }
    
return 0;
}