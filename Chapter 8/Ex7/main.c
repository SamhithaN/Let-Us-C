#include <stdio.h>

int main()
{
    int a[3][5],i,j;

    for(j=0;j<2;j++)
    {
        printf("Enter row %d",j+1);
        for(i=0;i<5;i++)
            scanf("%d",&a[j][i]);
    }
    for(j=0;j<2;j++)
        shift(a[j]);
    return 0;
}
void shift(int a[5])
{
    int i,temp1,temp2;
    temp1 = a[0];
    temp2 = a[1];
    for(i=2;i<5;i++)
    {
        a[i-2]=a[i];
        a[i-1]=a[i];
    }
    a[i-2]=temp1;
    a[i-1]=temp2;
    for(int j=0;j<5;j++)
        printf("\t%d",a[j]);
    printf("\n");
}
