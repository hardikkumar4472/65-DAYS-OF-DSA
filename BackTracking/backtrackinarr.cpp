#include<iostream>
using namespace std;
void printarr(int arr[],int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void changearr(int arr[],int n, int i){
    if (i==n){
        printarr(arr,n);
        return;
    }
    arr[i]=i+1;
    changearr(arr,n,i+1);
    arr[i]-=2;

}
int main(){
    int arr[5]={0,1,2,3,4};
    int n=5;
    changearr(arr,n,0);
    printarr(arr,n);
return 0;
}