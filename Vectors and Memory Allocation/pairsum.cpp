#include<iostream>
#include<vector>
using namespace std;
vector<int> pairsum(vector<int> arr,int target){
    int st=0, end=arr.size()-1;
    int currsum=arr[st]+arr[end];
    vector<int> ans;
    while (st<end)
    {
        if (currsum==target){
            ans.push_back(st);
            ans.push_back(end);
            return ans;
        }
        else if (currsum>target){
            end--;
        }
        else{
            end++;
        }
    }
}
int main(){

return 0;
}