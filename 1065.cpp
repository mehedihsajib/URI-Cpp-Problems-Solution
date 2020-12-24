///////////////////////////////////////
// 1065 - Even Between five Numbers
//////////////////////////////////////


#include <bits/stdc++.h>
 
using namespace std;

int main() {

  // Declare essential variables.
  int i, count = 0, numbers;
  
  for (i = 0; i < 5; i++) {
    // Taking six number as a input from test case.
    cin >> numbers;
      
    // Count even numbers
    if (numbers%2 == 0) {
      count++;
    }
  }

  // Print output.
  cout << count << " valores pares" << endl;

  return 0;

}

