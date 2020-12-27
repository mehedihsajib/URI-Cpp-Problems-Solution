 ///////////////////////////////////
// 1094 - Experiments
//////////////////////////////// 

#include<bits/stdc++.h>
using namespace std;

int main(){
  
  // Declare essential variables.
  string animal;
  int t, n, total = 0, c = 0, r = 0, s = 0;
  double parcentC, parcentR, percentS;

  // Taking number of input.
  cin >> t;
  while (t--) {
    cin >> n >> animal;

    // Calculate total animal.
    total += n;

    // Check codition;
    if (animal == "C") {
      c += n;
    } else if (animal == "R") {
      r += n;
    } else if (animal == "S") {
      s += n;
    }
  }

  // Calculate percentange.
  parcentC = (c * 100.0) / total;
  parcentR = (r * 100.0) / total;
  percentS = (s * 100.0) / total;

  // Print output.
  cout << "Total: " << total << " cobaias" << endl;
  cout << "Total de coelhos: " << c << endl;
  cout << "Total de ratos: " << r << endl;
  cout << "Total de sapos: " << s << endl;

  cout << fixed << setprecision(2) << "Percentual de coelhos: " << parcentC << " %" << endl;
  cout << fixed << setprecision(2) << "Percentual de ratos: " << parcentR << " %" << endl;
  cout << fixed << setprecision(2) << "Percentual de sapos: " << percentS << " %" << endl;
  
}

