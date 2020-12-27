//////////////////////////////////////////
// 1114 - Fixed Password
//////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;

int main(){
  
  // Declare essential variables.
  int pass, currectPass = 2002;

  while (true) {
    // Taking number of test case.
    cin >> pass;

    // Check, if the pass currect print and break program. else print pass invalid.
    if (pass == currectPass) {
      cout << "Acesso Permitido" << endl;
      break;
    } else {
      cout << "Senha Invalida" << endl;
    }  
  }
  
  return 0;
}


