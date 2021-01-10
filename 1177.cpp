///////////////////////////////////////////
// 1177 - Array Fill II
///////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;
int main() {

  // Declare essential variables.
  int i, t, k = 0;
  float n[1000];

  // Taking input.
  cin >> t;

  for (i = 0; i < 1000; i++) {
    // Print first num (0) then increament by 1;
    cout << "N[" << i << "] = " << k << endl;
    k++;

    // Where num equal t (input) simply print zero.
    if(k == t) {
      k = 0;
    }
  }

  return 0;
}

