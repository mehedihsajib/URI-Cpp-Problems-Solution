///////////////////////////////////
// 1009 - Salary with Bonus
//////////////////////////////////

#include <cstdio>

int main()
{

    // Declare essential varibles.
    double bonus, salary, totalSalary;
    char name[256];

    scanf("%s", &name);
    scanf("%lf", &salary);
    scanf("%lf", &bonus);

    totalSalary = salary + ((bonus/100)*15);
    printf("TOTAL = R$ %.2lf\n", totalSalary);

  return 0;
}