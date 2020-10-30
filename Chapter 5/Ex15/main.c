#include <stdio.h>
void divisor(int num[20],int den[20])
{
    int i,quo;
    for(i=0;;i++)
    {
        quo = num[i]/den[i];
        den[i+1]=num[i] - quo*den[i];
        num[i+1]=den[i];
        if(den[i+1]==0)
            break;
    }
    printf("The greatest divisor is %d",den[i]);
}
int main()
{
    int num[20],den[20];
    printf("Enter number two numbers");
    scanf("%d%d",&num[0],&den[0]);
    divisor(num,den);
    return 0;
}
