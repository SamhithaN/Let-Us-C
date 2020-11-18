#include <stdio.h>
#include<string.h>
int main()
{
    char s[6][10],*temp;
    int i,j;
    printf("Enter 3 names");
    for( int k=0;k<3;k++)
    {
        scanf(" %s",s[k]);
    }
    for(int k=0;k<3;k++)
    {
        printf("\n%s",s[k]);
    }
    for( i=0;i<3-1;j++)
    {
        for( j=0;j<=3-i-1;j++)
        {
            if(strcmp(s[j],s[j+1])>0)
            {
                temp = s[j];
                s[j][10]=s[j+1][10];
                s[j+1][10]=*temp;
            }
        }
    }
    for(int k=0;k<3;k++)
    {
        printf("\n%s",s[k]);
    }

    return 0;
}
