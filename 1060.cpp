///////////////////////////////////////
// 1060 - Positive Numbers
//////////////////////////////////////

#include <bits/stdc++.h>
 
using namespace std;

int main() {

  // Decare essential varibles.
  double numbers;
  int count;
  
  // Taking six number as a input from test case.
  for (int i = 0; i < 6; i++){
    cin >> numbers;

    if(numbers > 0)
    count++;
  }

  // Print output.
  cout << count << " valores positivos" << endl;

  return 0;

}

