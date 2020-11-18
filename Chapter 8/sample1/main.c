#include <stdio.h>

int main()
{
    static int a={0,1,2,3};
    int *p[]={a,a+1,a+2,a+3};
    printf("\n%u%u%d",p,*p,*(*p));
    return 0;
}
