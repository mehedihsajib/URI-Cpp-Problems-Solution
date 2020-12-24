/////////////////////////////////////////////
// 1066 - Even, Odd, Positive and Negative
//////////////////////////////////////////////


#include <bits/stdc++.h>
 
using namespace std;

int main() {

  // Declare essential variables.
  int i, numbers, evenCount = 0, oddCount = 0, positiveCount = 0, negativCount = 0;
  
  for (i = 0; i < 5; i++) {
    // Taking six number as a input from test case.
    cin >> numbers;
      
    // Count numbers.
    if (numbers%2 == 0) {
        evenCount++;
    } if (numbers%2 != 0) {
        oddCount++;
    } if (numbers > 0) {
        positiveCount++;
    } if (numbers < 0) {
        negativCount++;
    }
  }

  // Print output.
  cout << evenCount << " valor(es) par(es)" << endl;
  cout << oddCount << " valor(es) impar(es)" << endl;
  cout << positiveCount << " valor(es) positivo(s)" << endl;
  cout << negativCount << " valor(es) negativo(s)" << endl;

  return 0;
}



