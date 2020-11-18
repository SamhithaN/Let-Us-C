#include <stdio.h>

int main()
{
    int x=5,*n;
    *n=&x;
    printf("%d\t%d\t%d",x,&x,*n);
    return 0;
}
