///////////////////////////////////////////
// 1182 - Column in Array
///////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;
int main() {

  // Declare essential variables.
  int i, j, l;
  double m[12][12];
  char t[2];
  double sum = 0.0;

  // Taking l and t value.
  cin >> l;
  cin >> t;

  // Taking matrix input.
  for (i = 0; i < 12; i++) {
    for (j = 0; j < 12; j++) {
      cin >> m[i][j];

      if (j == l) {
        sum += m[i][j];
      }
    }
  }

  // Print sum if t == 'S' otherwise print average.
  if (t[0] == 'S') {
    cout << fixed << setprecision(1) << sum << endl;
  } else if (t[0] == 'M'){
    cout << fixed << setprecision(1) << (sum/12.0) << endl;
  }

  return 0;
}
