#include <stdio.h>

int main()
{
    int space,row,j,num=1;
    for(row=1;row<=4;row++)
    {
        for(space=0;space<=4-row;space++)
            printf("  ");
        for(j=1;j<=row;j++,num++)
                    printf("%4d",num);
        printf("\n");
    }
    return 0;
}
