///////////////////////////////////
// 1010 - Simple Calculate
//////////////////////////////////

#include <iostream>
#include <iomanip>

using namespace std;
int main()
{

  // Declare essential varibales.
  int code1, code2, unit1, unit2;
  float price1, price2, valuToPay;

  // Taking input from user.
  cin >> code1 >> unit1 >> price1;
  cin >> code2 >> unit2 >> price2;

  // Calculate value to pay and print output.
  valuToPay = (unit1*price1)+(unit2*price2);
  cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << valuToPay << "\n";


  return 0;
}