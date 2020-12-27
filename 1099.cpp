 //////////////////////////////////////////
// 1099 - Sum of Consecutive Odd Numbers II
///////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;

int main(){
  
  // Declare essential variables.
  int i, n, x, y, min, max, sum;

  // Taking number of test case.
  cin >> n;

  while(n--) {
    cin >> x >> y;
        
    // Check the min num;
    if (x < y) {
      min = x;
      max = y;
    } else {
      min = y;
      max = x;
    }

    // Count odd numbers.
    sum = 0;
    for (i = min+1; i < max; i++) {
      if (i%2 != 0) {
        sum += i;
      }
    }
    cout << sum << endl;
  } 

  return 0;
}

