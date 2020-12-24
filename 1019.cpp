///////////////////////////////////////
// 1019 - Time Conversion
///////////////////////////////////////

#include <bits/stdc++.h>

using namespace std;
int main()
{

  // Declare essential varibales.
  int n, hour, min, sec;

  // Taking input from user.
  cin >> n;

  // Calculate time
  hour = n / 3600;
  min = n % 3600/60;
  sec = n % 60;

  // Print outputs.
  cout << hour << ":" << min << ":" << sec << endl;
  
  return 0;
}