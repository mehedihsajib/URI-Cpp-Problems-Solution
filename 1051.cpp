///////////////////////////////////////
// 1051 - Taxes
//////////////////////////////////////

#include <bits/stdc++.h>
 
using namespace std;

int main() {

  // Decare essential varibles.
  float salary, taxToPay;

  // Taking input from user.
  cin >> salary;
  
  /// Check the condition and calcualte tax.
  if (salary >= 0 && salary <= 2000) {
    cout << "Isento" << endl;
  } else if (salary > 2000.01 && salary <= 3000) {
    salary -= 2000;
    taxToPay = (salary * .08);
    cout << fixed << setprecision(2) << "R$ " << taxToPay << endl;
  } else if (salary > 3000.01 && salary <= 4500) {
    salary -= 3000;
    taxToPay = (salary * .18) + 80;
    cout << fixed << setprecision(2) << "R$ " << taxToPay << endl;
  } else {
    salary -= 4500;
    taxToPay = (salary * .28) + 350;
    cout << fixed << setprecision(2) << "R$ " << taxToPay << endl;
  }

  return 0;

}