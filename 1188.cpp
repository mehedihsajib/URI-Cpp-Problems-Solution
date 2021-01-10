///////////////////////////////////////////
// 1188 - Inferior Area
///////////////////////////////////////////


#include<bits/stdc++.h>
using namespace std;
int main() {

  // Declare essential variables.
  int i, j, m = 5, n = 7 ;
  double M[12][12];
  char O;
  double sum = 0.0;

  // Taking value of O; 
  cin >> O;
    
  // Taking the matrix and calculate sum. 
  for(i = 0; i < 12; i++){
    for(j = 0; j < 12; j++){
      cin >> M[i][j];
    }
  }

  // Calculate sum.
  for (i = 7; i < 12; i++) {
    for (j = m; j < n; j++) {
      sum += M[i][j];
    }
    m--;
    n++;
  }

  // Print sum if O == 'S' otherwise print average.
  if (O == 'S') {
    cout << fixed << setprecision(1) << sum << endl;
  } else if (O == 'M'){
    cout << fixed << setprecision(1) << (sum/30.0) << endl;
  }

  return 0;
}
