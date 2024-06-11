#include<iostream>
using namespace std;
class user{
    int id;
    string username;
    string password;
    string bio;
    void deactivate(){
        cout<<"Deleting Account"<<endl;
    }
    void editbio(string newbio){
        bio=newbio;
    }
};
int main(){
    user u1;
    cout<<sizeof(user)<<endl;
return 0;
}