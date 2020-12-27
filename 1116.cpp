//////////////////////////////////////////
// 1116 - Dividing X by Y
//////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;

int main(){
  
  // Declare essential variables.
  int x, y, t;
  float division;

  // Taking input size.
  cin >> t;

  while (t--) {
    // Taking test case.
    cin >> x >> y;

    // Check x divided by y or not and print;
    if (y != 0) {
      division = (float)x / (float)y;
      cout << fixed << setprecision(1) << division << endl;
    } else {
      cout << "divisao impossivel" << endl;
    }
    
  }
  
  return 0;
}
