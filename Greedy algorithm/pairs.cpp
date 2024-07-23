#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
bool compare(pair <int,int> p1, pair<int,int>p2){
    return p1.second<p2.second;
}
bool comp(int a,int b){
    return a>b;
}
int main(){
    vector<int> start={0,1,2};
    vector<int> end={9,2,4};
    vector<pair<int,int>> activity(3,make_pair(0,0));
    activity[0]=make_pair(0,9);
    activity[1]=make_pair(1,2);
    activity[2]=make_pair(2,4);
    for (int i=0;i<activity.size();i++){
        cout<<"A"<<i<<":"<<activity[i].first<<","<<activity[i].second<<endl;
    };
    cout<<"Sorted:-"<<endl;
    sort(activity.begin(), activity.end(),compare);
    for (int i=0;i<activity.size();i++){
        cout<<"A"<<i<<":"<<activity[i].first<<","<<activity[i].second<<endl;
    };
return 0;
}