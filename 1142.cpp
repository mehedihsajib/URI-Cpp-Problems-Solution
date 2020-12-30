//////////////////////////////////////////
// 1142 - PUM
//////////////////////////////////////////


#include<bits/stdc++.h>
using namespace std;
int main() {

  // Declare essential variables..
  int n, i, j, p = 1;

  // Taking test case.
  cin >> n;

  for (i = 1; i <= (4*n - 1); i+=4) {
    for (j = i; j <= i+2; j++) {
      cout << j << " ";
    }
    cout << "PUM" << endl;
  }
    
  return 0;
}

