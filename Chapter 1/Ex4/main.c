#include <stdio.h>

int main()
{
    int num,a[100],digit,i;
    printf("Enter five digit number");
    scanf("%d",&num);
    for(i=4;i>=0;i--)
    {
        digit = num%10;
        num=num/10;
        if(digit==9)
            a[i]=0;
        else
            a[i]=digit+1;
    }
    for(i=0;i<5;i++)
    {
        printf("%d",a[i]);
    }

    return 0;
}
