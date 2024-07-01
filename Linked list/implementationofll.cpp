#include<iostream>
using namespace std;
class Node{
    int data;
    Node* next;
public:
    Node(int val){
        data=val;
        next=NULL;
    }
};
class List{
    Node* head;
    Node* tail;
public:
    List(){
        head=NULL;
        tail=NULL;
    }
};
int main(){
    List ll;
    
return 0;
}