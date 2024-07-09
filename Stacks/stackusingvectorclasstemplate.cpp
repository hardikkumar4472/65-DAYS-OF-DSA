#include<iostream>
#include<vector>
#include<string>
using namespace std;
template<class T>
class stack{
    vector<T> vec;
public:
    void push(int val){
        vec.push_back(val);
    }
    void pop(){
        vec.pop_back();
    }
    T top(){
        int lastidx=vec.size()-1;
        return vec[lastidx];
    }
    bool isEmpty(){
        return vec.size()==0;
    }
};
int main(){
stack <char>s;
    s.push('a');
    s.push('a');
    s.push('a');
    while(!s.isEmpty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;

return 0;
}