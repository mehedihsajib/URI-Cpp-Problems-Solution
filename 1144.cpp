//////////////////////////////////////////
// 1144 - Logical Sequence
//////////////////////////////////////////


#include<bits/stdc++.h>
using namespace std;
int main() {

  // Declare essential variables..
  int n, i, j, a, b;

  // Taking test case.
  cin >> n;

  for(i = 1; i <= n; i++) {
    for(j = 1; j <= 2; j++) {
      if (j == 1) {
        cout << i << " " << i*i << " " << i*i*i << endl;
      } else {
        cout << i << " " << (i*i)+1 << " " << (i*i*i)+1 << endl;
      }           
    }
  }
    
  return 0;
}

