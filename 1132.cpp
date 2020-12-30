//////////////////////////////////////////
// 1132 - Multiples of 13
//////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;
int main() {

  // Declare essential variables.
  int x, y, i, min, max, sum = 0;

  // Taking test case.
  cin >> x >> y;

  // Check the min number.
  if (x < y) {
    min = x;
    max = y;
  } else {
    min = y;
    max = x;
  }

  // Calculate sum;
  for (i = min; i <= max; i++) {
    if (i%13 != 0) {
      sum += i;
    }
  }

  // Print outputs.
  cout << sum << endl;
  
  return 0;
}

