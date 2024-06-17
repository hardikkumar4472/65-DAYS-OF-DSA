#include<iostream>
using namespace std;
class example{
    public:
    static int x;

};
int example::x=0;
int main(){
    example obj1;
    example obj2;
    example obj3;
    cout<<obj1.x++<<endl;
    cout<<obj2.x++<<endl;
    cout<<obj3.x++<<endl;
return 0;
}