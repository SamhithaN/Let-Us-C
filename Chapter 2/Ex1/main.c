#include <stdio.h>
#include<math.h>

int main()
{
    int year,days,leap=0,total_days,shift,i;

    printf("Enter year");
    scanf("%d",&year);
    days = abs(year-1900);
    if (year>1900)
    {
        for(i=1900;i<year;i++)
        {
            if(i%4==0)
                leap++;
        }
    }
    else
    {
        for(i=1900;i>year;i--)
        {
            if(i%4==0)
                leap++;
        }
    }
    total_days = (days-leap)*365 + leap*366;
    shift = abs(total_days%7 - 1);
    if(shift==0)
        printf("Monday");
    if(shift==1)
        printf("Tuesday");
    if(shift==2)
        printf("Wednesday");
    if(shift==3)
        printf("Thursday");
    if(shift==4)
        printf("Friday");
    if(shift==5)
        printf("Saturday");
    if(shift==6)
        printf("Sunday");

    return 0;
}
