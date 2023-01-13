#include <iostream>
#include <vector>
#include <sstream>
 

using namespace std;

int main() {
  long n;
  cin >> n;
  cout << to_string(n);

  while (n != 1) {
    if (n % 2 == 0) {  
      n /= 2;
    } else {
      n = n * 3 + 1;
    }
    cout << " " + to_string(n);
  }
  cout << endl;
}