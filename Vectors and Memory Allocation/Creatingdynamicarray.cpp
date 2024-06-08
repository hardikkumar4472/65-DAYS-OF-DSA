#include<iostream>
using namespace std;
int main(){
    int size;
    cin>>size;
    int *arr= new int[size]; //new create dynamic array allocation which can't be accessed and leads to memory leak
    int x=1;
    for (int i=0;i<size;i++){
        arr[i]=x;
        cout<<arr[i]<<" ";
        x++;
    }
    cout<<endl;
    delete [] arr; //free
return 0;
}