///////////////////////////////////////////
// 1172 - Array Replacement I
///////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;
int main() {

  // Declare essential variables.
  int i;
  int x[10];

  // Taking array as input.
  for (i = 0; i < 10; i++) {
    cin >> x[i];
  }

  // Print outputs.
  for (i = 0; i < 10; i++) {
    if (x[i] <= 0) {
      x[i] = 1;
    }
    cout << "X[" << i << "] = " << x[i] << endl;
  }


  return 0;
}

