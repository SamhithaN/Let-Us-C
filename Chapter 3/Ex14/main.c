#include <stdio.h>
int main()
{
    int row,col=8,i,j;
    for(row=0;row<=7;row++)
    {
        col--;
        for(j=1,i=0;j<=col;j++,i++)
        {
            printf("%c",'A'+i);
        }
        printf("\n");
    }
}

