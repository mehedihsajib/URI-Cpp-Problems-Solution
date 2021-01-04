/////////////////////////////////////////
// 1149 - Summing Consecutive Integers
/////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;
int main() {

  // Declare essential variables. 
  int i, a, n, sum = 0;

  // Taking test case.
  cin >> a >> n;

  // if test case negative or zero, take new test case n.
  while (n <= 0) {
    cin >> n;
  }

  // Calculate sum;
  for (i = 1; i <= n; i++) {
    sum += a;
    a++;
  }

  // Print output.
  cout << sum << endl;
  
  return 0;
}

