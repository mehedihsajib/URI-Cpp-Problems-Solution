///////////////////////////////////
// 1097 - Sequence IJ 3
//////////////////////////////// 

#include<bits/stdc++.h>
using namespace std;

int main(){
  
  // Declare essential variables.
  int i, j , a = 7, b;

  for (i = 1; i <= 9; i += 2) {
    for (b = 1, j = a; b <= 3; j--, b++) {
      cout << "I=" << i << " " << "J=" << j << endl;
		}
    a = a+2;
  }
  
}

