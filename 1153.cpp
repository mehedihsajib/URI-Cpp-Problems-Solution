/////////////////////////////////////////
// 1153 - Simple Factorial
/////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;
int main() {

  // Declare essential variables. 
  int i, n, fact = 1;

  // Taking test case.
  cin >> n;

  // Calculate factorial.
  for (i = 0; i <= n-1; i++ ) {
    fact *= (n-i);
  }

  // Print output.
  cout << fact << endl;
  
  return 0;
}

