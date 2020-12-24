///////////////////////////////////
// 1008 - Salary
//////////////////////////////////

#include <cstdio>

int main()
{
    //  Declare essential variables.
    int number, hours;
    float ammount, salary;
    
    // Taking input from user.
    scanf("%d", &number);
    scanf("%d", &hours);
    scanf("%f", &ammount);
    
    // Calculate salary and print.
    salary = hours * ammount;
    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2f\n", salary);
    
     return 0;
}