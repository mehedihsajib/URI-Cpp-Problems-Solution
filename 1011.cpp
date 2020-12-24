///////////////////////////////////
// 1011 - Sphere
//////////////////////////////////

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;
int main()
{

  // Declare essential varibales.
  double pi = 3.14159, r, volume;


  // Taking input from user.
  cin >> r;

  // Calculate and print output.
  volume = (4 * 3.14159 * pow(r, 3) / 3);
  cout << "VOLUME = " << fixed << setprecision(3) << volume << endl;

  return 0;
}