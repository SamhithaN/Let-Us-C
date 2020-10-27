#include <stdio.h>
int rem(int );
int main()
{
    int year,c;
    printf("Enter year");
    scanf("%d",&year);
    c = rem(year);
    if(c == 1||c==2||c==3)
        printf("Not Leap");
    else
        printf("Leap");
    return 0;
}
int rem(int year)
{
    return year%4;
}

