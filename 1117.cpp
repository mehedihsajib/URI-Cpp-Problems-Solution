//////////////////////////////////////////
// 1117 - Score Validation
//////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;

int main(){
  
  // Declare essential variables.
  float score1, score2, average;

  // Check for score1
  do {
    cin >> score1;
    if (score1 < 0 || score1 > 10) {
      cout << "nota invalida" << endl;
    }
  } while (score1 < 0 || score1 > 10);
  
  // Check for score2.
  do {
    cin >> score2;
    if (score2 < 0 || score2 > 10) {
      cout << "nota invalida" << endl;
    }
  } while (score2 < 0 || score2 > 10);
  
  // Calculate average and print.
  average = (score1+score2) / 2.0;
  cout << fixed << setprecision(2) << "media = " << average << endl;

  
  return 0;
}
