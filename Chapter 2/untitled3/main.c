#include <stdio.h>

int main()
{
    int a[2][2]={2,{2,3}},i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
            printf("\t%d",a[i][j]);
    }

    return 0;
}
