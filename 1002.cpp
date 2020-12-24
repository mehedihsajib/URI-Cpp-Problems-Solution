///////////////////////////////////
// 1002 - Area of a Circle
//////////////////////////////////

#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    
    // Declare essential variables.
    double r, areaOfCircle;
    
    // Taking input from test case.
    cin >> r;
    
    // Calculate area of cirlce.
    areaOfCircle = 3.14159 * r*r;
    
    // Print output.
    cout << "A="<< fixed << setprecision(4) << areaOfCircle << endl;
 
    return 0;
}