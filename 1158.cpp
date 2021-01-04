/////////////////////////////////////////
// 1158 - Sum of Consecutive Odd Numbers III
/////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;
int main() {

  // Declare essential variables. 
  int i, n, x, y, sum;

  // Taking input size.
  cin >> n;

  while (n--) {
    cin >> x >> y;

    sum = 0;
    if (x%2 != 0) {
      sum += x;
    } else {
      x += 1;
      sum += x;
    }

    for (i = 0; i < y-1; i++) {
      x += 2;
      sum += x;
    }

    // Print output.
    cout << sum << endl;
  }
  
  return 0;
}

