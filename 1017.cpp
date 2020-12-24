///////////////////////////////////////
// 1017 - Fuel Spent
///////////////////////////////////////

#include <bits/stdc++.h>

using namespace std;
int main()
{

  // Declare essential varibales.
  int spentTime , averageSpeed;
  double fuelNeed;

  // Taking input from user.
  cin >> spentTime >> averageSpeed;

  // Calculate fuel need.
  fuelNeed = (spentTime*averageSpeed) / 12.0;

  // Print outputs.
  cout << fixed << setprecision(3) << fuelNeed << endl;
  

  return 0;
}