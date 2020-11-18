#include <stdio.h>

int main()
{
    int a[10],pos=0,neg=0,even=0,odd=0;
    int i;
    printf("Enter the elements \n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        if(a[i]>=0)
            pos++;
        else
            neg++;
        if(a[i]%2==0)
            even++;
        else
            odd++;
    }
    printf(" \n Positive = %d,Negative = %d,Even = %d,Odd = %d",pos,neg,even,odd);
    return 0;
}
