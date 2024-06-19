#include<iostream>
#include<vector>
using namespace std;
int last_occur(vector<int> arr, int target, int i){
    if (i==arr.size()){
        return -1;
    }
    int idxfound=last_occur(arr,target,i+1);
    if (idxfound == -1 && arr[i]==target){
        return i;
    }
    return idxfound;
}
int main(){
    vector<int>arr={1,2,3,3,3,4};
    cout<<last_occur(arr,3,0);
return 0;
}