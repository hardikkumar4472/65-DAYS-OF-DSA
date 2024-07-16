#include<iostream>
#include<queue>
using namespace std;
class Stack{
    queue<int> q1,q2;
public:
    void push(int data){
        while (!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(data);
        while (!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }
    }
    void pop(){
        q1.pop();
    }
    int top(){
        return q1.front();
    }
    bool empty(){
        return q1.empty();
    }
};
int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    while (!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    
return 0;
}