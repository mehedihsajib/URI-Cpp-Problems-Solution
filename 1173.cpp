#include<bits/stdc++.h>
using namespace std;
int main() {

  // Declare essential variables.
  int i, n;
  int x[10];
  
  // Taking input.
  cin >> n;

  // Calculate and print outputs.
  for (i = 0; i < 10; i++) {
    x[i] = n;
    cout << "N[" << i << "] = " << n << endl;
    n *= 2;
  }

  return 0;
}

