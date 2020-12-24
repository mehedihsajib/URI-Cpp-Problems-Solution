///////////////////////////////////////
// 1035 - Selection Test 1
///////////////////////////////////////

#include <bits/stdc++.h>

using namespace std;
int main()
{

  // Declare essential varibales.
  int a, b, c, d;

  // Taking input from user.
  cin >> a >> b >> c >> d;

  // Checking all the condition and print.
  if (b > c && d > a && (c+d) > (a+b) && c > 0 && d > 0 && a%2 == 0) {
    cout << "Valores aceitos" << endl;
  } else {
    cout << "Valores nao aceitos" << endl;
  }

  return 0;
}