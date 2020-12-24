///////////////////////////////////////
// 1043 - Triangle
//////////////////////////////////////

#include <bits/stdc++.h>
 
using namespace std;

int main() {

  // Decare essential varibles.
  float a, b, c, perimeterOfTriangle, areaOfTrapezium;

  // Taking input from user.
  cin >> a >> b >> c;

  
  // Check the codition and print result.
  if (a < b+c && b < a+c && c < a+b) {
    perimeterOfTriangle = a+b+c;
    cout << fixed << setprecision(1) << "Perimetro = " << perimeterOfTriangle << endl;
  } else {
    areaOfTrapezium = ((a+b)*c) / 2;
    cout << fixed << setprecision(1) << "Area = " << areaOfTrapezium << endl;
  }
  
  return 0;

}