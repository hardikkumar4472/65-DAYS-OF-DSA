#include<iostream>
#include<string>
using namespace std;
class car{
    public:
    string name;
    string color;
    car (string name, string color){
        this ->name=name;
        this ->color=color;
    }
    car (car &original){
        cout<<"copying original to new.."<<endl;
        name=original.name;
        color=original.color;
    }
};
int main(){
    car c1("maruti 800", "white");
    car c2 (c1);
    cout<<c2.name<<endl;
    cout<<c2.color<<endl;

return 0;
}