///////////////////////////////////////
// 1018 - Banknotes
///////////////////////////////////////

#include <bits/stdc++.h>

using namespace std;
int main()
{

  // Declare essential varibales.
  int ammout, note;

  // Taking input from user.
  cin >> ammout;

  // Calculate possible minimum quantity of each necessary banknotes and print.
    cout << ammout <<"\n";
    cout << ammout/100 << " nota(s) de R$ 100,00\n";
    note = (ammout%100);
    cout << note/50 << " nota(s) de R$ 50,00\n";
    note = (note%50);
    cout << note/20 << " nota(s) de R$ 20,00\n";
    note = (note%20);
    cout << note/10 << " nota(s) de R$ 10,00\n";
    note = (note%10);
    cout << note/5 << " nota(s) de R$ 5,00\n";
    note = (note%5);
    cout << note/2 << " nota(s) de R$ 2,00\n";
    note = (note%2);
    cout << note/1 << " nota(s) de R$ 1,00\n";
  
  return 0;
}