#include<iostream>
#include<vector>
using namespace std;
class stack{
    vector<int> vec;
public:
    void push(int val){
        vec.push_back(val);
    }
    void pop(){
        vec.pop_back();
    }
    int top(){
        int lastidx=vec.size()-1;
        return vec[lastidx];
    }
    bool isEmpty(){
        return vec.size()==0;
    }
};
int main(){
stack s;
    s.push(3);
    s.push(2);
    s.push(1);
    while(!s.isEmpty()){
        cout<<s.top()<<" ";
        s.pop();
    }

return 0;
}