///////////////////////////////////
// 1014 - Consumption
//////////////////////////////////

#include <bits/stdc++.h>

using namespace std;
int main()
{

  // Declare essential varibales.
  int totalDistance;
  double spentFuel, totalSpentFuel;

  // Taking input from user.
  cin >> totalDistance;
  cin >> spentFuel;

  // Calculate totalFuelSpent.
  totalSpentFuel = totalDistance / spentFuel;

  // Print outputs.
  cout << fixed << setprecision(3) << totalSpentFuel << " km/l" << endl;
  

  return 0;
}