#include<iostream>
using namespace std;
void diagonalsum(int matrix[][4],int row,int col){
    int sum=0;
    for (int i=0;i<=row-1;i++){
        for (int j=0;j<=col-1;j++){
            if (i==j){
                sum+=matrix[i][j];
            }
            else if (j==row-i-1){
                sum+=matrix[i][j];
            }
        }
    }
    cout<<sum;
}
int main(){
    int matrix[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    diagonalsum(matrix,4,4);
return 0;
}