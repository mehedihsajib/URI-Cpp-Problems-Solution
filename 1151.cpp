/////////////////////////////////////////
// 1151 - Easy Fibonacci
/////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;
int main() {

  // Declare essential variables. 
  int i, n, x, firstNum, secondNum;

  // Taking test case.
  cin >> n;

  if (n == 0) {
    cout << "0" << endl;
    return 0;
  }

  firstNum = 1;
  secondNum = 1;
  cout << "0";

  // Calculate fibonacci;
  for (i = 1; i < n; i++) {
    cout << " " << firstNum;
    x = firstNum;
    firstNum = secondNum;
    secondNum = secondNum + x;
  }

  cout << endl;
  
  return 0;
}

