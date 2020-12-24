///////////////////////////////////////
// 1047 - Game Time with Minutes
//////////////////////////////////////

#include <bits/stdc++.h>
 
using namespace std;

int main() {

  // Decare essential varibles.
  int initialHour,initialMin,finalHour,finalMin;
  double durationOfGameHour,durationOfGameMin;

  // Taking input from user.
  cin >> initialHour >> initialMin >> finalHour >> finalMin;
  
  // Calculate duration hour.
  durationOfGameHour = finalHour - initialHour;
  if (durationOfGameHour < 0) {
    durationOfGameHour = 24 + (finalHour-initialHour);
  }

  // Calculate duration min.
  durationOfGameMin = finalMin - initialMin;
  if (durationOfGameMin < 0) {
    durationOfGameMin = 60 + (finalMin-initialMin); 
    durationOfGameHour--;
  } if (durationOfGameHour < 0) {
    // If duration < 0 (negative).
    durationOfGameHour = 24 + durationOfGameHour;
  }

  // In case of hour and min are the same.
  if (initialHour == finalHour && initialMin == finalMin) {
    cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl; 
  } else {
    cout << "O JOGO DUROU " << durationOfGameHour << " HORA(S) E " << durationOfGameMin << " MINUTO(S)" << endl;
  }
        
    
  return 0;

}