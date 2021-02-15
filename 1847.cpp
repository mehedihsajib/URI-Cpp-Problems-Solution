///////////////////////////////////////////
// 1847 - Welcome to the Winter!
///////////////////////////////////////////


#include<bits/stdc++.h>
using namespace std;
int main() {
  // Declare essetial variables.
  int a, b, c;
    cin >> a >> b >> c;

    if(a > b && c >= b) {
      cout << ":)" << endl;
    } else if (b > a && c <= b) {
      cout << ":(" << endl;
    } else if (b > a && c > b && c-b < b-a) {
      cout << ":(" << endl;
    } else if (b > a && c > b && c-b >= b-a) {
       cout << ":)" << endl;
    } else if (a > b && b > c && c-b > b-a ) {
      cout << ":)" << endl;
    } else if (a > b && b > c && c-b <= b-a) {
      cout << ":(" << endl;
    } else if (a == b && c > b) {
      cout << ":)" << endl;
    } else if (a == b && c<b) {
      cout << ":(" << endl;
    } else {
      cout << ":(" << endl;
    } 


  return 0;
}
