///////////////////////////////////////////
// 1789 - The Race of Slugs
///////////////////////////////////////////


#include<bits/stdc++.h>
using namespace std;
int main() {

  // Declare essential variables.
  int i, l, max;
  int slugSpeeds[500];

  while ((scanf("%d",&l))!=EOF) {
    
    // Taking l array
    for (i = 0; i < l; i++) {
      cin >> slugSpeeds[i];
    }

    // Decide the maximum number.
    max = slugSpeeds[0];
    for (i = 1; i < l; i++) {
      if (slugSpeeds[i] > max) {
        max = slugSpeeds[i];
      }
    }

    // Decide which level.
    if (max < 10) {
      cout << "1" << endl;
    } else if (max >= 10 && max < 20) {
      cout << "2" << endl;
    } else if (max >= 20) {
      cout << "3" << endl;
    }

  }

  return 0;
}
