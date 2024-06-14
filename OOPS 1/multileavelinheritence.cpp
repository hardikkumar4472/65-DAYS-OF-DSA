#include<iostream>
using namespace std;
class Animal{
    public:
        void eat(){
            cout<<"Eats"<<endl;
        }
        void breathe (){
            cout<<"breathes"<<endl;
        }
};
class mammal :public Animal{
    public:
        string bloodtype;
        mammal(){
            bloodtype="warm";
        }
};
class dog : public mammal{
    public:
        void tailwag(){
            cout<<"a dog wags its tail"<<endl;
        }
};
int main(){
    dog d1;
    d1.eat();
    d1.breathe();
    cout<<d1.bloodtype<<endl;
return 0;
}