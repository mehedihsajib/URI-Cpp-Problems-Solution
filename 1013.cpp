///////////////////////////////////
// 1013 - The Greatest
//////////////////////////////////

#include <bits/stdc++.h>

using namespace std;
int main()
{

  // Declare essential varibales.
  int a, b, c, max;

  // Taking input from user.
  cin >> a >> b >> c;

  // Find biger number and print.
  max = a;
  if(a < b || a < c){
    if(b < c){
    max = c;
    }else{
    max = b;
    }
  }

  cout << max << " eh o maior" << endl;

  return 0;
}