#include<iostream>
using namespace std;
void star_pattern(int size){
    for (int i=0;i<size;i++){
        for (int j=0;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
void inverted_star_pattern(int size){
    for (int i=size;i>=0;i--){
        for (int j=0;j<i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
void Half_Pyramid(int size){
    for (int i=0;i<=size;i++){
        for (int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void character_pattern(int size){
    char ch='A';
    for (int i=0;i<=size;i++){
        for (int j=0;j<=i;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}
void hollow_rectangle (int size){
    for (int i=1;i<=size;i++){
        cout<<"*";
        for (int j=1;j<=size-1;j++){
            if (i==1 || i==size){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"*"<<endl;
    }
}
void inverted_and_rotated_half_pyramid(int size){
    for (int i=1;i<=size;i++){
        for (int j=1;j<=size-i;j++){
            cout<<" ";
        }
        for (int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void floyd_triangle(int size){
    int num=1;
    for (int i=1;i<=size;i++){
        for (int j=1;j<=i;j++){
            cout<<num++<<" ";
        }
        cout<<endl;
    }

}
void diamond_pattern(int size){
    for (int i=1;i<=size;i++){
        for (int i=1;i<size-i;i++){
            cout<<" ";
        }
        for (int i=1;i<2*i-1;i++){
            cout<<"*";
        }
    }
}

int main(){
    int n;
    cin>>n;
    cout<<"Star Pattern"<<endl;
    star_pattern(n);
    cout<<endl;
    cout<<"Inverted Star Pattern"<<endl;
    inverted_star_pattern(n);
    cout<<"Half Pyramid Pattern"<<endl;
    Half_Pyramid(n);
    cout<<"Character Pattern"<<endl;
    character_pattern(n);
    cout<<"Hollow Rectangle"<<endl;
    hollow_rectangle(n);
    cout<<"inverted and rotated half pyramid"<<endl;
    inverted_and_rotated_half_pyramid(n);
    cout<<"Floyd's Traingle"<<endl;
    floyd_triangle(n);
    cout<<"Diamond Triangle"<<endl;
    diamond_pattern(n);
return 0;
}