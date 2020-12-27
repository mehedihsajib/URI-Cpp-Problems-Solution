 ///////////////////////////////////////////
// 1101 - Sequence of Numbers and Sum
///////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;

int main(){
  
  // Declare essential variables.
  int i, m, n, sum, min, max;

  while (true) {
    // Taking number of test case.
    cin >> m >> n;

    // Check the min num;
    if (m < n) {
      min = m;
      max = n;
    } else {
      min = n;
      max = m;
    }

    // Check the numbers are less than or equal zero or not.
    if (min <= 0 || max <= 0) {
      break;
    }

    // Calculate sum between m,n;
    sum = 0;
    for (i = min; i <= max; i++) {
      cout << i << " ";
      sum += i;
    }

    // Print output.
    cout << "Sum=" << sum << endl;
  }
  
  return 0;
}


