#include<iostream>
using namespace std;
class example{
    public:
    example(){
        cout<<"constructor"<<endl;
    }
    ~example(){
        cout<<"destructor"<<endl;
    }
};
int main(){
    int a=0;
    if (a==0){
        static example e;
    }
    cout<<"code ending"<<endl;
return 0;
}