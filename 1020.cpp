///////////////////////////////////////
// 1020 - Age in Days
///////////////////////////////////////

#include <bits/stdc++.h>

using namespace std;
int main()
{

  // Declare essential varibales.
  int ageInDays, years, months, days;

  // Taking input from user.
  cin >> ageInDays;

  // Calculate time
  years = ageInDays / 365;
  months = ageInDays % 365 / 30;
  days = ageInDays % 365 % 30;


  // Print outputs.
  cout << years << " ano(s)" << endl;
  cout << months << " mes(es)" << endl;
  cout << days << " dia(s)" << endl;
  
  return 0;
}