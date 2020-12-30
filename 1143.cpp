//////////////////////////////////////////
// 1143 - Squared and Cubic
//////////////////////////////////////////


#include<bits/stdc++.h>
using namespace std;
int main() {

  // Declare essential variables..
  int n, i, a, b;

  // Taking test case.
  cin >> n;

  for (i = 1; i <= n; i++) {
    a = (i*i);
    b = (i*i*i);

    cout << i << " " << a << " " << b << endl;
  }
    
  return 0;
}

