#include <stdio.h>
void binary(int );
void octal(int );

int main()
{
    int num,rem,oct=0,base=1;
    printf("Enter the number");
    scanf("%d",&num);
    while(num>0)
    {
        rem = num%8;
        num/=8;
        oct = oct + rem*base;
        base*=10;
    }
    printf("%d",oct);
}
