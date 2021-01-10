///////////////////////////////////////////
// 1180 - Lowest Number and Position
///////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;
int main() {

  // Declare essential variables.
  int i, n, min, pos;

  // Taking size of array;
  cin >> n;

  // Store size in x array.
  int x[n];

  // Taking array as input.
  for (i = 0; i < n; i++) {
    cin >> x[i];
  } 

  // Imagine first num of array as a minimum num.
  min = x[0];

  // Find the minimum num and it's position.
  for (i = 1; i <= n; i++) {
    if (min > x[i]) {
      min = x[i];
      pos = i;
    }
  }

  // Print outputs.
  cout << "Menor valor: " << min << endl;
  cout << "Posicao: " << pos << endl;

  return 0;
}


