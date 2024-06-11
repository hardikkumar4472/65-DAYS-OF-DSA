#include<iostream>
using namespace std;
class student {
    private:
        string name;
    public:
        float cgpa;
        void getpercentage(){
            cout<<(cgpa*10)<<"%"<<endl;
        }
};
int main(){
    student s1;
    s1.cgpa=9.0;
    cout<<s1.cgpa<<endl;
    s1.getpercentage();
return 0;
}