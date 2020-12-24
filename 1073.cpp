///////////////////////////////////////////
// 1073 - Even Square
///////////////////////////////////////////

#include <bits/stdc++.h>
 
using namespace std;

int main() {

  // Declare essential variables.
  int i, x, evenSquare;

  // Taking input from user (number of test case).
  cin >> x;
      
  // Calculate even square and print outputs.
  for (i = 2; i <= x; i+=2) {
    evenSquare = pow(i, 2);
    cout << i << "^" << "2" << " = " << evenSquare << endl;
  } 

  return 0;
}
