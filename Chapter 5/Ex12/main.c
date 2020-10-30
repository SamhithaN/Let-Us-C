#include <stdio.h>
void shift(int *x, int *y, int *z);
int main()
{
    int a=5,b=10,c=20,i;
    for(i=0;i<3;i++)
    {
        shift(&a,&b,&c);
        printf("a=%d,b=%d,c=%d \n",a,b,c);
    }

    return 0;
}
void shift(int *x,int *y,int *z)
{
    int temp1,temp2;
    temp1 = *x;
    temp2 = *z;
    *z=*y;
    *y=temp1;
    *x=temp2;
}
