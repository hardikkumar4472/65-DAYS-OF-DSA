#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char sentence[100];
    cin.getline(sentence,100,'*');
    cout<<"Your Word Was"<<endl;
    cout<<sentence<<endl;
    cout<<"Length of word is "<<strlen(sentence);
return 0;
}