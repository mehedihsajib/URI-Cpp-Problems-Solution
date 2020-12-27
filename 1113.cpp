 ///////////////////////////////////////////
// 1113 - Ascending and Descending
///////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;

int main(){
  
  // Declare essential variables.
  int x, y;

  while (true) {
    // Taking number of test case.
    cin >> x >> y;

    // Check x, y equal or not.
    if (x == y) {
      break;
    }

    // Check the number in Ascending or Descending order and print.
    if (x < y) {
      cout << "Crescente" << endl;
    } else if (x > y) {
      cout << "Decrescente" << endl;
    }
  }
  
  return 0;
}


