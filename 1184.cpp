///////////////////////////////////////////
// 1184 - Below the Main Diagonal
///////////////////////////////////////////


#include<bits/stdc++.h>
using namespace std;
int main() {

  // Declare essential variables.
  int i,j;
  double M[12][12];
  char O;
  double sum = 0.0;

  // Taking value of O; 
  cin >> O;
    
  // Taking the matrix and calculate sum. 
  for(i = 0; i < 12; i++){
    for(j = 0; j < 12; j++){
      cin >> M[i][j];

      if(j < i){
        sum += M[i][j];
      }
    }
  }

  // Print sum if t == 'S' otherwise print average.
  if (O == 'S') {
    cout << fixed << setprecision(1) << sum << endl;
  } else if (O == 'M'){
    cout << fixed << setprecision(1) << (sum/66.0) << endl;
  }

  return 0;
}
