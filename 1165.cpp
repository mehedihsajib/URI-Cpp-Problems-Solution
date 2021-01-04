///////////////////////////////////////////
// 1165 - Prime Number
///////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;
int main() {

  // Declare essential variables. 
  int i, n, x, c;
  
  // Taking input size.
  cin >> n;

  while (n--) {
    cin >> x;

    // Find divisor of x.
    c = 0;
    for (i = 1; i <= x; i++) {
	    if (x%i == 0) {
        c++;
      } 
    }

    // Check prime or not.
    if (c == 2) {
      cout << x << " eh primo" << endl;
	  } else {
      cout << x << " nao eh primo" << endl;
	  }
  }
  
  return 0;
}

