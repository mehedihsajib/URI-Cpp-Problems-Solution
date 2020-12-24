///////////////////////////////////////////
// 1080 - Highest and Position
///////////////////////////////////////////

#include <bits/stdc++.h>
 
using namespace std;

int main() {

  // Declare essential variables.
  int i, x, n = 100 , max = 0, pos = 0;

  // Find highest number and it's position.
  for (i = 1; i <= n; i++) {

    // Taking input from user.
    cin >> x;
      
    if (max > x) {
      max = max;
      pos = pos;
    } else {
      max = x;
      pos = i;
    }
  }

  // Print outputs.
  cout << max << endl;
  cout << pos << endl;

  return 0;
}
