///////////////////////////////////////
// 1045 - Triangle Types
//////////////////////////////////////

#include <bits/stdc++.h>
 
using namespace std;

int main() {

  // Decare essential varibles.
  double a, b, c;

  // Taking input from user.
  cin >> a >> b >> c;
  
  // Check the condition and print;
    if(a >= (b+c) || b >= (a+c) || c >= (a+b)) {
      cout << "NAO FORMA TRIANGULO" << endl;
    } else if (a*a == (b*b + c*c) || b*b == (a*a + c*c) || c*c == (a*a + b*b)) {
      cout << "TRIANGULO RETANGULO" << endl;
    } else if (a*a > (b*b + c*c) || b*b > (a*a + c*c) || c*c > (a*a + b*b)) {
      cout << "TRIANGULO OBTUSANGULO" << endl;
    } else if (a*a < (b*b + c*c) || b*b < (a*a + c*c) || c*c < (a*a + b*b)) {
      cout << "TRIANGULO ACUTANGULO" << endl;
    } if (a == b && a == c) {
      cout << "TRIANGULO EQUILATERO" << endl;
    } if ((a == b && a != c)  || (a == c && a != b) || (b == c && b != a)) {
      cout << "TRIANGULO ISOSCELES" << endl;
    }
       
    
  return 0;

}