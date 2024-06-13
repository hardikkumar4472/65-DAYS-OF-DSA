#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec1;

    for (int i=0;i<=100;i++){
        vec1.push_back(i);
    }
    for (int i=0;i<vec1.size();i++){
        cout<<vec1[i]<<" ";
    }
return 0;
}