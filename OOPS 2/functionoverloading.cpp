#include<iostream>
#include<string>
using namespace std;
class print {
    public:
    void show(int x){
        cout<<"INT: "<<endl;
    }
    void show(string x){
        cout<<"STRING : "<<endl;
    }
};
int main(){
    print obj1;
    obj1.show(25);
    obj1.show("HELLO WORLD");
return 0;
}