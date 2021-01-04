/////////////////////////////////////////
// 1157 - Divisors I
/////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;
int main() {

  // Declare essential variables. 
  int n, i;

  // Taking test case.
  cin >> n;

  // Calculate divisor and print.
  for (i = 1; i <= n; i++) {
    if (n%i == 0) {
      cout << i << endl;
    }
  }
  
  return 0;
}

