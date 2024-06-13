#include <iostream>
#include <vector>
using namespace std;
int main() {
  vector<int> prime_numbers{2, 3, 5, 7};
  cout << "Initial Vector: ";
  for ( int i=0;i<prime_numbers.size();i++) {
    cout << i << " ";
  }
  prime_numbers.pop_back();
  cout << "\nUpdated Vector: ";
  for (int i=0;i<prime_numbers.size();i++) {
    cout << i << " ";
  }
  
  return 0;
}