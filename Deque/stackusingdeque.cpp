#include<iostream>
#include<deque>
using namespace std;
class Stack{
    deque<int> dq;
public:
    void push(int data){
        dq.push_front(data);
    }
    void pop(){
        dq.pop_front();
    }
    int top(){
        return dq.front();
    }
};
int main(){
    Stack s;
    for (int i=0;i<=5;i++){
        s.push(i);
    }
    for (int i=0;i<=5;i++){
        cout<<s.top()<<endl;
        s.pop();
    }

return 0;
}