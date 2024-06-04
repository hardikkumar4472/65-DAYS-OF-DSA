#include<iostream>
using namespace std;
void maxsubarray(int *array,int n){
    int max_sum=INT8_MIN;
    for (int start=0;start<n;start++){
        for (int end=start; end<n;end++){
            int sum=0;
            for (int i=start;i<=end;i++){
                sum+=array[i];
            }
            cout<<sum<<",";
            max_sum=max(max_sum,sum);
        }
        cout<<endl;

    }
    cout<<"Maximum subarray sum = "<<max_sum<<endl;
}
int main(){
    int arr[6]={2,-3,6,-5,4,2};
    int n=sizeof(arr)/sizeof(int);
    maxsubarray(arr,n);
return 0;
}