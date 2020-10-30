#include <stdio.h>

int main()
{
    int rows,space,i,j;
    int a[25][25];
    printf("Enter number of rows");
    scanf("%d",&rows);
    printf("\n");
    for(i=0;i<=rows;i++)
    {
        for(space=0;space<=rows-i;space++)
            printf("  ");
        for(j=0;j<=i;j++)
        {
            if(j==0||i==j)
                a[i][j]=1;
            else
                a[i][j]= a[i-1][j-1] + a[i-1][j];
            printf("%4d",a[i][j]);
        }
        printf(" \n ");
    }
    return 0;
}
