#include <stdio.h>
#include<stdlib.h>
int main()
{
    int age;
    char area,gender,health;
    float amt;
    int prem;
    printf("Enter age");
    scanf("%d",&age);

    if(age>=25&&age<=35)
    {
        printf("Enter area, City(c) or Village(v)");
        scanf(" %c",&area);
        printf("Enter gender, male(m) or female(f)");
        scanf(" %c",&gender);
        printf("Enter health, excellent(e) or poor(p)");
        scanf(" %c",&health);
            if(area=='c'&& health=='e')
            {
               if(gender=='m')
               {
                   amt=2;
                   prem=3;
               }
               else
               {
                   amt=1;
                   prem=3;
               }
             }
            else if(area=='v'&& health=='p'&& gender=='m')
            {
                amt=0.1;
                prem=6;
            }
            else
            {
                printf("Not insured");
                exit(0);
            }
    }
    else
    {
        printf("Not insured");
        exit(0);
    }

    printf("Amount = %f Lakhs and Premium = %d per thousand \n",amt,prem);


    return 0;
}
