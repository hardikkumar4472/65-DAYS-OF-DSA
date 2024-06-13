#include <iostream>
#include <vector>
using namespace std;
int main() {
  vector<int> num {1, 2, 3, 4, 5};
  num.at(1) = 9;
  num.at(4) = 7;
  for (int i=0;i<num.size();i++){
    cout<<num[i]<<" ";
  }
  return 0;
}