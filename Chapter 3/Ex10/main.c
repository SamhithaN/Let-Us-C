#include <stdio.h>

int main()
{
    int i,j;
    for(i=0;;i++)
        for(j=0;j<25;j++)
        {
            if(j%2==0)
                printf("%c ",3);
            else
                printf("%c ",4);
        }
    return 0;
}
