///////////////////////////////////////
// 1036 - Bhaskara's Formula
//////////////////////////////////////

#include <bits/stdc++.h>

using namespace std;
int main()
{

  // Declare essential varibales.
  float a,b,c,m,r1,r2;

  // Taking input from user.
  cin >> a >> b >> c;

  // Checking calcular possible or not.
  m = pow(b,2) - 4*a*c;
  if (m < 0) {
    // if not possible.
    cout << "Impossivel calcular" << endl;
  } else if (a == 0) {
    // if not possible.
    cout << "Impossivel calcular" << endl;
  } else {
    // if possible.
    r1 = ((-b) + sqrt(m))/(a+a);
    r2 = ((-b) - sqrt(m))/(a+a);
      
    cout << fixed << setprecision(5) << "R1 = " << r1 << endl;
    cout << fixed << setprecision(5) << "R2 = " << r2 << endl;
  }

  return 0;
}