///////////////////////////////////////////
// 1164 - Perfect Number
///////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;
int main() {

  // Declare essential variables. 
  int i, n, x, y, sum;
  
  // Taking input size.
  cin >> n;

  while (n--) {
    cin >> x;

    // Calculate divisor of x and thair sum.
    sum = 0;
    for (i = 1; i < x; i++) {
      if (x%i == 0) {
        sum += i;
      }
    }

    // If x equal to divisor's sum of x;
    if (x == sum) {
      cout << x << " eh perfeito" << endl;
    } else {
      cout << x << " nao eh perfeito" << endl;
    }
  }
  
  return 0;
}

