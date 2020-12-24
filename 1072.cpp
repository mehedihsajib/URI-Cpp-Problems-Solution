///////////////////////////////////////////
// 1072 - Interval 2
///////////////////////////////////////////

#include <bits/stdc++.h>
 
using namespace std;

int main() {

  // Declare essential variables.
  int i, n, x, inCount = 0, outCount = 0;

  // Taking input from user (number of test case).
  cin >> n;
      
  for (i = 0; i < n; i++) {
    // Taking input x;
    cin >> x;
    
    if (x >= 10 && x <= 20) {
        inCount++;
    } else {
        outCount++;
    }
  }

  // Print outputs.
  cout << inCount << " in" << endl;
  cout << outCount << " out" << endl;

  return 0;
}
