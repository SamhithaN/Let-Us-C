#include <stdio.h>

int main()
{
    int hours,overtime,amt,total=0,i;
    for(i=1;i<=3;i++)
    {
        printf("\nEnter employee %d hours",i);
        scanf("%d",&hours);
        if(hours>40)
        {
            overtime = hours - 40;
            amt = overtime * 12;
            printf("Amount paid to employee %d",amt);
            total = total + amt;
        }
    }
    printf("Total amount paid for overtime %d",total);
    return 0;
}
