#include <stdio.h>

int main()
{
    float sal,allow,rent,gross;
    printf("Enter salary");
    scanf("%f",&sal);
    allow= sal*0.4;
    rent=sal*0.2;
    gross = sal - (allow+rent);
    printf("Gross Salary is %f",gross);

    return 0;
}
