///////////////////////////////////////////
// 1074 - Even or Odd
///////////////////////////////////////////

#include <bits/stdc++.h>
 
using namespace std;

int main() {

  // Declare essential variables.
  int i, x, n;

  // Taking input from user (number of test case).
  cin >> n;
      
  // Check condition and print outputs.
  for (i = 0 ; i < n; i++) {
    // Taking n number of input.
    cin >> x;
      
    // Chekc condition.
    if(x == 0){
      cout << "NULL" << endl;
    } else if (x % 2 == 0){
      if(x > 0){
        cout << "EVEN POSITIVE" << endl;
    } else {
      cout << "EVEN NEGATIVE" << endl;
    }

      } else {
      if (x > 0) {
        cout << "ODD POSITIVE" << endl;
      } else {
        cout << "ODD NEGATIVE" << endl;
      }
  
    }
  }

  return 0;
}
