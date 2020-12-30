//////////////////////////////////////////
// 1118 - Several Scores with Validation
//////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;
int main() {

  // Declare essential variables.
  double score1 , score2 , average;
  int g, h, x, y, z;

  for (h = 1; ;h = 1, x = 1, y = 1 , z = 1) {
    // Taking score1.
    cin >> score1;

    // Check score valid or not.
    if (score1 < 0 || score1 > 10) {
      cout << "nota invalida" << endl;
      continue;
    }

    // Taking score2 and check valid or not.
    while (x == 1) {
      cin >> score2;
      if (score2 < 0 || score2 > 10) {
        cout << "nota invalida" << endl;
        continue;
      }
      x += 2;
    }

    // Calculate average.
    average = (score1 + score2) / 2.0;
    cout << fixed << setprecision(2) << "media = " << average << endl;
    cout << "novo calculo (1-sim 2-nao)" << endl;

    // Want to continue calculating or not.
    while (y == 1) {
      cin >> g;
      if (g < 1 || g > 2) {
        cout << "novo calculo (1-sim 2-nao)" << endl;
        continue;
      }
      y += 2;
    }

    // Close program if input equal 2;
    if (g == 2) {
      break;
    }
      
  }

  return 0;
}
