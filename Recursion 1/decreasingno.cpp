#include<iostream>
using namespace std;
void decreasing_numbers(int n){
    if (n==0){
        return;
    }
    cout<<n<<endl;
    return decreasing_numbers(n-1);
    
}
int main(){
decreasing_numbers(4);
return 0;
}