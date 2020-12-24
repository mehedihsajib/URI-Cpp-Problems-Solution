///////////////////////////////////////
// 1048 - Salary Increase
//////////////////////////////////////


#include <bits/stdc++.h>
 
using namespace std;

int main() {

  // Decare essential varibles.
  float salary, newSalary, moneyEarned;
  int inPercentage;

  // Taking input from user.
  cin >> salary;
  
  // Calculate new slary, money earned and parcentage.
  if (salary <= 400.00) {
      newSalary = salary + (salary * 0.15);
      moneyEarned = (salary * 0.15);
      inPercentage = 15;
  } else if (salary <= 800.00) {
      newSalary = salary + (salary * 0.15);
      moneyEarned = (salary * 0.12);
      inPercentage = 12;
  } else if (salary <= 1200.00) {
      newSalary = salary + (salary * 0.10);
      moneyEarned = (salary * 0.10);
      inPercentage = 10;
  } else if (salary <= 2000.00) {
      newSalary = salary + (salary * 0.07);
      moneyEarned = (salary * 0.07);
      inPercentage = 7;
  } else {
      newSalary = salary + (salary * 0.04);
      moneyEarned = (salary * 0.04);
      inPercentage = 4;
  }

  // Print outputs.
  cout << fixed << setprecision(2) << "Novo salario: " << newSalary << endl;
  cout << fixed << setprecision(2) << "Reajuste ganho: " << moneyEarned << endl;
  cout << "Em percentual: " << inPercentage << " %" << endl;

      
  return 0;

}