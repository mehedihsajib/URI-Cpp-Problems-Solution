 ///////////////////////////////////
// 1049 - Animals
//////////////////////////////////  

// // wrong answer.

#include<bits/stdc++.h>
using namespace std;

int main(){
  
  // Declare essential variables.
  string w1, w2, w3;
  
  // Taking input from user.
  cin >> w1;
  cin >> w2;
  cin >> w3;

  if (w1 == "vertebrado") {
    if (w2 == "ave" && w3 == "carnivoro") {
      cout << "aguia" << endl;
    } if (w2 == "ave" && w3 == "onivoro") {
      cout << "pomba" << endl;
    } else if (w1 == "vertebrado") {
      if (w2 == "mamifero" && w3 == "onivoro") {
        cout << "homen" << endl;
      } else if (w2 == "mamifero" && w3 == "herbivoro") {
        cout << "vaca" << endl;
      }
    } 
  } else if (w1 == "invertebrado") {
    if (w2 == "inseto" && w3 == "hematofago") {
      cout << "pulga" << endl;
    } if (w2 == "inseto" && w3 == "herbivoro") {
      cout << "lagarta" << endl;
    } else if (w1 == "invertebrado") {
      if (w2 == "anelideo" && w3 == "hematofago") {
        cout << "sanguessuga" << endl;
      } else if (w2 == "anelideo" && w3 == "onivoro") {
        cout << "minhoca" << endl;
      }
    }
  } 
}

