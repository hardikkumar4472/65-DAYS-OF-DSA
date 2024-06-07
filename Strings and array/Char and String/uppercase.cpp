#include <iostream>
#include <cstring>


using namespace std;

int main()
{
    char str[50];
    cin.getline(str,50);
    for (int x=0; x<strlen(str); x++)
        cout<<(char)toupper(str[x]);
    
    return 0;
}