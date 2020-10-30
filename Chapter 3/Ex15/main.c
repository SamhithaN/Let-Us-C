#include <stdio.h>

int main()
{
    int row,col,i=0,space;
    for(row=7;row>=1;row--)
    {
        for(col=1;;col++,i++)
        {
            printf("%c",'A'+i);
            if(col==row)
            {
                for(space=row+1;space<=13-row;space++)
                    printf(" ");
                for(col=13-row;col<13;col++,i--)
                    printf("%c",'A'+i);
                i=0;
                break;
            }
        }
        printf("\n");
    }

    return 0;
}
