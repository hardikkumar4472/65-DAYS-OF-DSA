#include<iostream>
using namespace std;
void maxsubarray2(int *array,int n){
    int max_sum=INT8_MIN;
    for (int start=0;start<n;start++){
        int sum=0;
        for (int end=start; end<n;end++){
            sum+=array[end];
            max_sum=max(max_sum,sum);
        }
    }
    cout<<"Maximum subarray sum = "<<max_sum<<endl;
}
int main(){
    int arr[6]={2,-3,6,-5,4,2};
    int n=sizeof(arr)/sizeof(int);
    maxsubarray2(arr,n);
return 0;
}