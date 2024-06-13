#include<iostream>
#include<string>
using namespace std;
class car{
    public:
    string name;
    string color;
    int *mileage;
    car (string name, string color){
        this ->name=name;
        this ->color=color;
        mileage=new int;
        *mileage=12;
    }
    car (car &original){
        cout<<"copying original to new.."<<endl;
        name=original.name;
        color=original.color;
        *mileage=*original.mileage;

    }
    ~car (){
        cout<<"Deleting Object"<<endl;
        if (mileage !=NULL){
            delete mileage;
            mileage=NULL;
        }
    }
};
int main(){
    car c1("maruti 800", "white");
    cout<<c1.name<<endl;
    cout<<c1.color<<endl;
    cout<<*c1.mileage<<endl;
return 0;
}