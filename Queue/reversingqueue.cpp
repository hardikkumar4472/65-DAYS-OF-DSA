#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void reverse(queue<int> &q){
    stack<int> s;
    while (!q.empty()){
        s.push(q.front());
        q.pop();
    }
    while (!s.empty()){
        q.push(s.top());
        s.pop();
    }
}
int main(){
    queue<int> q;
    for (int i=1;i<=5;i++){
        q.push(i);
    }
    reverse(q);
    for (int i=1;i<=5;i++){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
return 0;
}