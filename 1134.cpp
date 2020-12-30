//////////////////////////////////////////
// 1134 - Type of Fuel
//////////////////////////////////////////


#include<bits/stdc++.h>
using namespace std;
int main() {

  // Declare essential variables.
  int code, alcool = 0, gasolina = 0, diesel = 0;

  while (true) {
    // Read test case.
    cin >> code;

    // Check condition and count.
    if (code < 0 && code > 4) {
      continue;
    } if (code == 1) {
      alcool++;
    } if (code == 2) {
      gasolina++;
    } if (code == 3) {
      diesel++;
    }

    // Break the program if code equal 4.
    if (code == 4) {
      break;
    }
  }

  // Print outputs.
  cout << "MUITO OBRIGADO" << endl;
  cout << "Alcool: " << alcool << endl;
  cout << "Gasolina: " << gasolina << endl;
  cout << "Diesel: " << diesel << endl;
  
  return 0;
}

