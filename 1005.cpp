///////////////////////////////////
// 1005 - Average 1
//////////////////////////////////

#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
    // Declare essential variables.
    double a, b, med;
    
    // Taking input from user.
    cin >> a >> b;
    
    // Calculate average and print.
    med = ((a*3.5) + (b*7.5))/(3.5 + 7.5);
    cout << "MEDIA = " << fixed << setprecision(5) << med << endl;
 
    return 0;
}