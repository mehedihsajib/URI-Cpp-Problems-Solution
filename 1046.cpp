///////////////////////////////////////
// 1046 - Game Time
//////////////////////////////////////

#include <bits/stdc++.h>
 
using namespace std;

int main() {

  // Decare essential varibles.
  int startTime, endTime, durationOfGame;

  // Taking input from user.
  cin >> startTime >> endTime;
  
  // Calcuate duration of the game according to condition.
  durationOfGame = endTime - startTime;

  if (durationOfGame < 0) {
    durationOfGame = 24 + (endTime - startTime);
  } if (startTime == endTime) {
    cout << "O JOGO DUROU 24 HORA(S)" << endl;
  } else {
    cout << "O JOGO DUROU " << durationOfGame << " HORA(S)" << endl;
  }
        
    
  return 0;

}