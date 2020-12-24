///////////////////////////////////////
// 1041 - Coordinates of a Point
//////////////////////////////////////


#include <bits/stdc++.h>
 
using namespace std;

int main() {

  // Decare essential varibles.
  float x,y;

  // Taking input from user.
  cin >> x >> y;

  // Check the condition and print.
  if (x == 0 && y == 0) {
    cout << "Origem" << endl;
  } else if (y == 0) {
    cout << "Eixo X" << endl;
  } else if (x == 0) {
    cout << "Eixo Y" << endl;
  } else if (x > 0 && y > 0) {
    cout << "Q1" << endl;
  } else if (x < 0 && y > 0) {
    cout << "Q2" << endl;
  } else if (x < 0 && y < 0) {
    cout << "Q3" << endl;
  } else {
    cout << "Q4" << endl;
  }
    
 
  return 0;

}