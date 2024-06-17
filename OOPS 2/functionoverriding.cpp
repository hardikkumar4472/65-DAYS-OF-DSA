#include<iostream>
using namespace std;
class parent{
    public:
        void show(){
            cout<<"Parent class show";
        }
};
class child{
    public:
        void show(){
            cout<<"Child class show";
        }
};
int main(){
    child c1;
    c1.show();
return 0;
}