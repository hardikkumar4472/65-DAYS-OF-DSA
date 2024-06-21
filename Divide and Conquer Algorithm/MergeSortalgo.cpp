#include<iostream>
#include<vector>
using namespace std;

//For Conquer 
void merge(int arr[], int si, int mid, int ei){
    vector<int> temp;
    int i=si;
    int j=mid+1;
    while (i<=mid && j<=ei){
        if (arr[i]<=arr[j]){
            temp.push_back(arr[i++]);
        }
        else{
            temp.push_back(arr[j++]);
        }
    }
    while (i<=mid){
        temp.push_back(arr[i++]);
    }
    while (j<=ei){
        temp.push_back(arr[j++]);
    }
    for (int idx=si, x=0; idx<=ei;idx++){
         arr[idx]=temp[x++];
    }
}

void mergersort(int arr[], int si, int ei){
    if (si>=ei){
        return;
    }
    int mid=(si+ei)/2;
    mergersort(arr,si,mid); //for left half
    mergersort(arr,mid+1,ei); //for right half    
    merge(arr,si,mid,ei);
}

void printarr(int arr[], int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[6]={6, 3, 7, 5, 2, 4};
    int n=6;
    mergersort(arr,0,n-1);
    printarr(arr,n);
    return 0;
}
