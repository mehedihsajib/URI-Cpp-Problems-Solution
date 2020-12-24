///////////////////////////////////////
// 1040 - Average 3
//////////////////////////////////////

#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    // Declare essential varibales.
    float n1, n2, n3, n4, n5, average, averageInExam;
    
    // Taking input from user.
    cin >> n1 >> n2 >> n3 >> n4;
    
    // Calculate everage and print.
    average = ((n1*2 + n2*3 + n3*4 + n4*1) / 10);
    cout << fixed << setprecision(1) << "Media: " << average << endl;
    
    // Check condtions.
    if (average >= 7.0) {
      cout << "Aluno aprovado." << endl;
    } if (average < 5.0) {
      cout << "Aluno reprovado." << endl;
    } if (average >= 5.0 && average < 7.0) {
      cout << "Aluno em exame." << endl;
        
      cin >> n5;
      cout << "Nota do exame: " << n5 << endl;
        
      if((average + n5)/2.0 >= 5.0) {
        cout << "Aluno aprovado." << endl;
      } else {
        cout << "Aluno reprovado." << endl;
      }

      cout << "Media final: " << (average + n5)/2.0 << endl;
            
    
 
      return 0;

  }
}