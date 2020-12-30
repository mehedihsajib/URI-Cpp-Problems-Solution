//////////////////////////////////////////
// 1131 - Grenais
//////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;
int main() {

  // Declare essential variables.
  int a, b, c, c1 = 0, c2 = 0, c3 = 0, count = 0;

  while (true) {
    // Taking test case.
    cin >> a >> b;

    // Check contions.
    if (a > b) {
      c1++;
    } if (a < b) {
      c2++;
    } if (a == b) {
      c3++;
    }
    count++;
    cout << "Novo grenal (1-sim 2-nao)" << endl;
    cin >> c;
    if(c == 2){
      break;
    }
  }

  // Print outputs.
  cout << count << " grenais" << endl;
  cout << "Inter:" << c1 << endl;
  cout << "Gremio:" << c2 << endl;
  cout << "Empates:" << c3 << endl;

  // Check condition and print.
  if(c1 > c2){
    cout << "Inter venceu mais" << endl;
  } else if (c1 < c2) {
    cout << "Gremio venceu mais" << endl;
  } else {
    cout << "Empates venceu mais" << endl;
  }

  return 0;
}