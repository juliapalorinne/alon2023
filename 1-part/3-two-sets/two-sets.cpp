#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main() {
  int n;
  cin >> n;

  stringstream set1;
  stringstream set2;
  
  bool possible = false;
  int rem = n % 4;
  long sum1 = 0;
  long sum2 = 0;
  int n1 = 0;
  int n2 = 0;
  if (rem == 0 || rem == 3) {
    possible = true;
    for (int i = n; i > 0; i--) {
      if (sum1 <= sum2) {
        sum1 += i;
        set1 << i << " ";
        n1++;
      } else {
        sum2 += i;
        set2 << i << " ";
        n2++;
      }
    }
  }
  
  if (possible) {
    cout << "YES" << endl;
    cout << n1 << endl;
    cout << set1.str() << endl;
    cout << n2 << endl;
    cout << set2.str() << endl;
  } else {
    cout << "NO" << endl;
  }
}