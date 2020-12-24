///////////////////////////////////////
// 1044 - Multiples
//////////////////////////////////////

#include <bits/stdc++.h>
 
using namespace std;

int main() {

  // Decare essential varibles.
  int a, b;

  // Taking input from user.
  cin >> a >> b;
  
  /// Check the condition and print;
  if (a%b == 0 || b%a == 0) {
    cout << "Sao Multiplos" << endl;
  } else {
    cout << "Nao sao Multiplos" << endl;
  }
    
  return 0;

}