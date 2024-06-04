#include<iostream>
using namespace std;
void maxsubarray3(int *array,int n){
    int max_sum=INT8_MIN;
    int sum=0;
    for (int i=0;i<n;i++){
        sum+=array[i];
        max_sum=max(sum,max_sum);
        if (sum<0){
            sum=0;
        }
    }
    cout<<"Maximum subarrays sum = "<<max_sum<<endl;
}
int main(){
    int arr[6]={2,-3,6,-5,4,2};
    int n=sizeof(arr)/sizeof(int);
    maxsubarray3(arr,n);
return 0;
}