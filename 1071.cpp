///////////////////////////////////////////
// 1071 - Sum of Consecutive Odd Numbers I
///////////////////////////////////////////

#include <bits/stdc++.h>
 
using namespace std;

int main() {

  // Declare essential variables.
  int i, x, y, min, max, sum = 0;

  // Taking input from user.
  cin >> x >> y;
      
  /// Check the min and max number.
  if (x < y) {
    min = x;
    max = y;
  } else {
    max = x;
    min = y;
  }

  // Calculate the sum of odd.
  for (i = min+1; i < max; i++) {
    if (i%2 != 0) {
      sum += i;
    }
  }

  // print output.
  cout << sum << endl;

  return 0;
}
