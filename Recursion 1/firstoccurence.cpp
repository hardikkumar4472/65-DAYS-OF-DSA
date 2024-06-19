#include<iostream>
#include<vector>
using namespace std;
int first_occur(vector<int> arr, int i, int target){
    if (i==arr.size()){
        return -1;
    }
    if (arr[i]==target){
        return i;
    }
    return first_occur(arr,i+1,target);
}
int main(){
    vector<int>arr={1,2,3,3,3,4};
    cout<<first_occur(arr,0,3);
return 0;
}