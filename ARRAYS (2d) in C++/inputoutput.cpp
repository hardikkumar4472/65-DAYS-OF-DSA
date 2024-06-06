#include<iostream>
using namespace std;
int main(){
    int row;
    int col;
    cout<<"Enter No. of Row of Array: "<<endl;
    cin>>row;
    cout<<"Enter No. of Column of Array: "<<endl;
    cin>>col;
    int arr[row][col];
    cout<<"Enter Element Of array: "<<endl;
    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}