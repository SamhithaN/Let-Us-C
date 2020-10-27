#include <stdio.h>

int main()
{
    int num,last,first,i=0,j;
    printf("Enter number");
    scanf("%d",&num);
    first = num;
    last = num%10;
    while(num!=0)
    {
        num = num/10;
        i++;
    }
    for(j=1;j<i;j++)
    {
        first=first/10;
    }
    printf("Sum of first and last digit is %d",first+last);
    return 0;
}
