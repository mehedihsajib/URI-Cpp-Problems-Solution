///////////////////////////////////
// 1012 - Area
//////////////////////////////////

#include <bits/stdc++.h>

using namespace std;
int main()
{

  // Declare essential varibales.
  double a, b, c, 
    areaOfTriangle, areaOfCircle, areaOfTrapezium, 
    areaOfSqure, areaOfRectangle, pi = 3.14159;

  // Taking input from user.
  cin >> a >> b >> c;

  // Calculate using formula.
  areaOfTriangle = 0.5 * (a * c);
  areaOfCircle = pi * pow(c, 2);
  areaOfTrapezium = 0.5 * (a * c) + 0.5 * (b * c);
  areaOfSqure = pow(b, 2);
  areaOfRectangle = a * b;

  // Print outputs.
  cout << "TRIANGULO: " << fixed << setprecision(3) << areaOfTriangle << endl;
  cout << "CIRCULO: " << fixed << setprecision(3) << areaOfCircle << endl;
  cout << "TRAPEZIO: " << fixed << setprecision(3) << areaOfTrapezium << endl;
  cout << "QUADRADO: " << fixed << setprecision(3) << areaOfSqure << endl;
  cout << "RETANGULO: " << fixed << setprecision(3) << areaOfRectangle << endl;


  return 0;
}