#include <iostream>
using namespace std;
 
int main()
{
    int N;
    cin>>N;
    int spaces = 2 * N - 1;
    int stars = 0;

    for (int i = 1; i <= 2 * N - 1; i++) {
        if (i <= N) {
            spaces = spaces - 2;
            stars++;
        }
        else {
            spaces = spaces + 2;
            stars--;
        }
        for (int j = 1; j <= stars; j++) {
            cout << "*";
        }
        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }
        for (int j = 1; j <= stars; j++) {
            if (j != N) {
                cout << "*";
            }
        }
        cout << "\n";
    }
 
    return 0;
}