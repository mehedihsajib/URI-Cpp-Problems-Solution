#include<bits/stdc++.h>
using namespace std;
int main() {

  // Declare essential variables.
  int i, n;
  float x[20];

  // Taking input
  for (i = 19; i >= 0; i--) {
    cin >> x[i];
  }

  // Calculate and print outputs.
  for (i = 0; i < 20; i++) {
    cout << "N[" << i << "] = " << x[i] << endl;
  }

  return 0;
}
