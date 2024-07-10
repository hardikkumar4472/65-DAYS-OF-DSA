#include<iostream>
#include<stack>
#include<string>
using namespace std;
void pushAtBottom(stack<int>& s, int val){//O(n)
    if (s.empty()){
        s.push(val);
        return;
    }
    int temp=s.top();
    s.pop();
    pushAtBottom(s,val);
    s.push(temp);
}
string reverseString(string str){
    string ans;
    stack<char> s;
    for (int i = 0; i < str.size(); i++){
        s.push(str[i]);
    }
     while(!s.empty()){
        char top=s.top();
        ans+=top;
        s.pop();
    }
    return ans;

}
int main(){
    string str="abcd";
    cout<<"reverse = "<<reverseString(str)<<endl;
}