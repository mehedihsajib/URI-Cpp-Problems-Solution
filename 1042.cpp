///////////////////////////////////////
// 1042 - Simple Sort
//////////////////////////////////////


#include <bits/stdc++.h>
 
using namespace std;

int main() {

  // Decare essential varibles.
  int a, b, c, min, mid, max;

  // Taking input from user.
  cin >> a >> b >> c;

  /// Sort number in assending order.
  if (a < b && a < c) {
    min = a;

    if (b < c) {
      mid = b;
      max = c;
    } else {
      mid = c;
      max = b;
    }
  } else if (b < a && b < c) {
    min = b;

    if (a < c) {
      mid = a;
      max = c;
    } else {
      mid = c;
      max = a;
    }
  } else {
    min = c;

    if (a < b) {
      mid = a;
      max = b;
    } else {
      mid = b;
      max = a;
    }
  }

  // Print output.
  cout << min << endl << mid << endl << max << endl;
  cout << endl;
  cout << a << endl << b << endl << c << endl;
 
  return 0;

}