#include<iostream>
using namespace std;
class shape {
    public:
    virtual void draw()=0;
};
class circle : public shape{
    public:
        void draw(){
        cout<<"circle"<<endl;        };
};
class square : public shape{
    public:
        void draw(){
        cout<<"square"<<endl;        
        };
};
int main(){
    circle c;
    c.draw();
    square s;
    s.draw();

return 0;
}