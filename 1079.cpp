///////////////////////////////////////////
// 1079 - Weighted Averages
///////////////////////////////////////////
 

#include<bits/stdc++.h>
using namespace std;

int main(){
  
  // Declare essential variables.
  int t, i;
  double average, num1, num2, num3;

  // Taking number of test case.
  cin >> t;
  while (t--) {
    cin >> num1 >> num2 >> num3;

    // Calculate average and print.
    average = ((num1/10) * 2) + ((num2/10) * 3) + ((num3/10) * 5);
    cout << fixed << setprecision(1) << average << endl;
  }
  
}

