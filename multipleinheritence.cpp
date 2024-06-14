#include<iostream>
using namespace std;
class teacher {
    public:
    int salary;
    string subject;
};
class student{
    public:
    int rollno;
    float cgpa;
};
class TA: public teacher, public student{
    public:
    string name;
};
int main(){
     TA ta1;
     ta1.name="XYZ";
     ta1.subject="DSA";
     ta1.cgpa=9.1;
     cout<<ta1.name<<endl;
     cout<<ta1.subject<<endl;
     cout<<ta1.cgpa<<endl;
return 0;
}