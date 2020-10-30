//To print all armstrong numbers from 1 to 500
#include <stdio.h>

int main()
{
    int i,num,a,b,c,j;
    for(i=1;i<100;i++)
    {
        num=i;
        a=i%10;
        b=i/10;
        if(num == a*a*a + b*b*b)
            printf("%d\n",num);
        i=num;
    }

    for(j=100;j<=500;j++)
    {
        num=j;
        a=j%10;
        j/=10;
        b=j%10;
        c=j/10;
        if(num == a*a*a + b*b*b + c*c*c)
            printf("%d \n",num);
        j=num;

    }

    return 0;
}
