#include<iostream>
using namespace std;
class car{
    string name;
    string color;
    public:
        car(){
            cout<<"Constructor without param";
        }
        car (string namevalue, string colorvalue){
            cout<<"Constructor is called";
            this->name=name;
            this->color=color;
        }
        void start(){
            cout<<"Car is started"<<endl;
        }
        void stop(){
            cout<<"Car is stopped"<<endl;
        }
        string getname(){
            return name;
        }
        string getcolor(){
            return color;
        }
};
int main(){
 car c1("maruti 800","White");
 cout<<endl;
 cout<<"Car name: "<<c1.getname()<<endl;
 cout<<"Car color: "<<c1.getcolor()<<endl;
return 0;
}