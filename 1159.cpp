///////////////////////////////////////////
// 1159 - Sum of Consecutive Even Numbers
///////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;
int main() {

  // Declare essential variables. 
  int i, n, x, y, sum;

  while (true) {
    cin >> x;

    // Program will be end if x == 0;
    if (x == 0) {
      break;
    }

    // calculate Consecutive even number.
    sum = 0;
    for (i = x; i < x+10; i++) {
      if (i%2 == 0) {
        sum += i;
      }
    }

    // Print output.
    cout << sum << endl;
  }
  
  return 0;
}

