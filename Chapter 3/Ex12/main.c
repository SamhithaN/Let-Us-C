#include <stdio.h>

int main()
{
    float a[2],inital_cost=6000,earning=1000,salvage=2000,rate=12,SI;
    int i;
    a[0] = - (inital_cost - salvage);
    for(i=1; ; i++)
    {
        SI = (earning*rate*i)/100;
        a[1]=earning*i + SI - (inital_cost- salvage);
        if(a[1]<a[0])
            break;
        else
            a[0]=a[1];
    }
    printf("The amount earned is %f in the year %d",a[0],i-1);
    return 0;
}
