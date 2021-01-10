///////////////////////////////////////////
// 1178 - Array Fill III
///////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;
int main() {

  // Declare essential variables.
  int i;
  double x;
  float n[100];

  // Taking input.
  cin >> x;

  for (i = 1; i <= 99; i++) {
    // Print first num (x) then x dived by 2;
    cout << fixed << setprecision(4) << "N[" << i << "] = " << x << endl;
    x /= 2;
  }

  return 0;
}


