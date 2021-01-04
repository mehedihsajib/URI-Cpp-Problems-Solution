/////////////////////////////////////////
// 1154 - Ages
/////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;
int main() {

  // Declare essential variables. 
  int n;
  float average, sum = 0, count = 0;

  while (true) {
    // Taking test case.
    cin >> n;

    if (n < 0) {
      break;
    }

    sum += n;
    count++;
    
  }

  // Calculate average and print.
  average = sum / count;
  cout << fixed << setprecision(2) << average << endl;
  
  return 0;
}

