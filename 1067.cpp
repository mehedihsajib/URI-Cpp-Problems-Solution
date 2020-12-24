///////////////////////////////////////
// 1067 - Odd Numbers
//////////////////////////////////////


#include <bits/stdc++.h>
 
using namespace std;

int main() {

  // Declare essential variables.
  int i, x;

  // Taking input from user.
  cin >> x;
      
  // Check the condition and print output.
  for (i = 1; i <= x; i++) {
    if (i%2 != 0) {
      cout << i << endl;
    }
  }

  return 0;
}
