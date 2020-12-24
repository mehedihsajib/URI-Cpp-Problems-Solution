///////////////////////////////////
// 1006 - Average 2
//////////////////////////////////

#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    // Declare essential variables.
    float a, b, c, med;
    
    // Taking input from user.
    cin >> a >> b >> c;
    
    // Calculate average and print.
    med = (a/10 * 2) + (b/10 * 3) + (c/10 * 5);
    cout << "MEDIA = " << fixed << setprecision(1) << med << endl;
 
    return 0;
}