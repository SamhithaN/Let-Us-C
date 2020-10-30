#include <stdio.h>

int main()
{
    int i,j;

    for(i=1;i<=3;i++)
    {
        printf("\n");
        for(j=5;j<=(int)(5-(2i-1));j--)
                printf("%c",'A'+j);
    }
    return 0;
}
