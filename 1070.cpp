///////////////////////////////////////
// 1070 - Six Odd Numbers
//////////////////////////////////////

#include <bits/stdc++.h>
 
using namespace std;

int main() {

  // Declare essential variables.
  int i, x;

  // Taking input from user.
  cin >> x;
      
  // Check the condition and print output.
  for (i = x; i <= x+11; i++) {
    if (i%2 != 0) {
      cout << i << endl;
    }
  }

  return 0;
}
