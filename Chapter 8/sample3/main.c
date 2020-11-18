#include <stdio.h>

int main()
{
    int a[2]={1,2,3},b;
    printf("%d\t%d\t%d\t%d",a[0],a[1],a[2],b);
    int j,*ptr;
    ptr=&j;
    *ptr=35;
    printf("\n%d\t",j);
    return 0;

}
