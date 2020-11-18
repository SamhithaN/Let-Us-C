#include <stdio.h>

int main()
{
    int n[2][2]={2,3,
                 3,4};
    printf("%d\t%d\t%d\t%d",*n,*n+1,n[2][2],n[1][1]);

    return 0;
}
