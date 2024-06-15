#include<iostream>
#include<string>
using namespace std;
class complex{
    int real;
    int img;
    public:
        complex(int r,int i){
            real=r;
            img=i;
        }
        void shownum(){
            cout<<real<<"+"<<img<<endl;
        }
        void operator + (complex &c2){
            int resreal=this->real+c2.real;
            int resimg=this->real+c2.img;
            complex c3(resreal,resimg);
            cout<<"res = ";
            c3.shownum();
        }
};
int main(){
    complex c1(1,2);
    complex c2(3,4);
    c1.shownum();
    c2.shownum();
    c1+c2;
return 0;
}