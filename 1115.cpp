 //////////////////////////////////////////
// 1115 - Quadrant
//////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;

int main(){
  
  // Declare essential variables.
  int x, y;

  while (true) {
    // Taking number of test case.
    cin >> x >> y;

    // If any one cordinate is null;
    if (x == 0 || y == 0) {
      break;
    }

    // Check the cordinate and print.
    if (x > 0 && y > 0) {
			cout << "primeiro" << endl;
		} else if (x > 0 && y < 0) {
		  cout << "quarto" << endl;
		} else if(x < 0 && y < 0){
			cout << "terceiro" << endl;
		} else if (x < 0 && y > 0) {
			cout << "segundo" << endl;
		}
  }
  
  return 0;
}
