#include<iostream>
#include<string>
using namespace std;
class user{
    private:
        int id;
        string password;
    public:
        string username;
    user (int id){
        this->id=id;
    }
    string getpassword(){
        return password;
    }
    void setpassword(string password){
        this->password=password;
    }
};
int main(){
    user user1(101);
    user1.username="abcd";
    user1.setpassword("axcz");
    cout<<"username: "<<user1.username<<endl;
    cout<<"password: "<<user1.getpassword()<<endl;
return 0;
}