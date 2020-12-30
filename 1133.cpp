//////////////////////////////////////////
// 1133 - Rest of a Division
//////////////////////////////////////////


#include<bits/stdc++.h>
using namespace std;
int main() {

  // Declare essential variables.
  int x, y, i, min, max;

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

  // Calculate numbers and print;
  for (i = min+1; i < max; i++) {
    if (i%5 == 2 || i%5 == 3) {
      cout << i << endl;
    }
  }
  
  return 0;
}

