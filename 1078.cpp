///////////////////////////////////////////
// 1078 - Multiplication Table
///////////////////////////////////////////

#include <bits/stdc++.h>
 
using namespace std;

int main() {

  // Declare essential variables.
  int i, n, mul;

  // Taking input from user.
  cin >> n;

  // Calculate multiplication.
  for (i = 1; i <= 10; i++) {
      mul = i*n;
      cout << i << " x " << n << " = " << mul << endl;
  }

  return 0;
}
