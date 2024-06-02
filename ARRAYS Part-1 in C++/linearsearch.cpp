#include<iostream>
using namespace std;
int main(){
    int size_of_array,key;
    int count=0;
    int index=0;
    cout<<"Enter Size Of Array: ";
    cin>>size_of_array;
    int arr[size_of_array];
    for (int i=0;i<size_of_array;i++){
        cin>>arr[i];
    }
    cout<<"Required Array is: "<<endl;
    for (int i=0;i<size_of_array;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter element to find: ";
    cin>>key;
    for (int i = 0; i < size_of_array; i++)
    {
        if (arr[i]==key){
            count=1;
            index=i;
        }
    }
    if (count!=1){
        cout<<"Element Not found";
    }
    else{
        cout<<"Element found at index "<<index;
    }

return 0;
}