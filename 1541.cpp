///////////////////////////////////////////
// 1541 - Building Houses
///////////////////////////////////////////


#include<bits/stdc++.h>
using namespace std;
int main() {

  // Declare essential variables.
  int a, b, c, area;

  while(true) {
    cin >> a;
    // Break the program if a in equal zero;
    if (a == 0) {
      break;
    }
    cin >> b >> c;

    // Calculate area and print.
    area = sqrt(a*b*100 / c);
    cout << area << endl;
  }
  
  return 0;
}


