#include<iostream>
using namespace std;
void spiralmatrix(int matrix[][4],int m,int n){
    int srow=0;
    int scol=0;
    int ecol=n-1;
    int erow=m-1;
    while (srow<=erow && scol<ecol){
    //top
    for (int j=scol; j<=ecol; j++){
        cout<<matrix[srow][j]<<" ";
    }
    //right
    for (int i=srow+1;i<erow+1;i++){
        cout<<matrix[i][ecol]<<" ";
    }
    //bottom
    for (int j=ecol-1;j>=scol;j--){
        cout<<matrix[erow][j]<<" ";
    }
    //left
    for (int i=erow-1;i>=srow+1;i--){
        cout<<matrix[i][scol]<<" ";
    }
    srow++;
    scol++;
    erow--;
    ecol--;

}
cout<<endl<<" ";
}
int main(){
    int matrix[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    spiralmatrix(matrix,4,4);
return 0;
}