///////////////////////////////////////
// 1038 - Snack
//////////////////////////////////////

#include <bits/stdc++.h>

using namespace std;
int main()
{

  // Declare essential varibales.
  int porductCode, quantity;
  float amountToPay;

  // Taking input from user.
  cin >> porductCode >> quantity;

  // Check the condition.
  if (porductCode == 1) {
      amountToPay = (4.00*quantity);
  } else if (porductCode == 2) {
    amountToPay = (4.50*quantity);
  } else if (porductCode == 3) {
      amountToPay = (5.00*quantity);
  } else if (porductCode == 4) {
    amountToPay = (2.00*quantity);
  } else {
      amountToPay = (1.50*quantity);
  }

  // Print outputs.
  cout << fixed << setprecision(2) << "Total: R$ " << amountToPay << endl;

  return 0;
}