#include<iostream>
#include<string>
using namespace std;
class Animal {
    public:
    string color;
    void eat (){
        cout<<"eats"<<endl;
    }
    void breathe(){
        cout<<"breathes"<<endl;
    }
};
class fish: public Animal {
    public:
    int fins;
    void swim(){
        cout<<"swins"<<endl;
    }
};
int main(){
    fish f1;
    f1.fins=3;
    cout<<f1.fins<<endl;
    f1.swim();
return 0;
}