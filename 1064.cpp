///////////////////////////////////////
// 1064 - Positives and Average
//////////////////////////////////////

#include <bits/stdc++.h>
 
using namespace std;

int main() {

  // Declare essential variables.
  float numbers, average, sum = 0;
  int i, count = 0;
  
  for (i = 0; i < 6; i++) {
    // Taking six number as a input from test case.
    cin >> numbers;
      
    // Count positve numbers
    if (numbers > 0) {
      count++;
      sum += numbers;
    }
  }

  // Calculate average;
  average = sum / count; 

  // Print output.
  cout << count << " valores positivos" << endl;
  cout << fixed << setprecision(1) << average << endl;

  return 0;

}

