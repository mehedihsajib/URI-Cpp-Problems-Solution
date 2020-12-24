///////////////////////////////////////
// 1015 - Distance Between Two Points
///////////////////////////////////////

#include <bits/stdc++.h>

using namespace std;
int main()
{

  // Declare essential varibales.
  double x1, x2, y1, y2, distance;

  // Taking input from user.
  cin >> x1 >> y1;
  cin >> x2 >> y2;

  // Calculate distance.
  distance = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));

  // Print outputs.
  cout << fixed << setprecision(4) << distance << endl;
  

  return 0;
}