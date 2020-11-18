#include <stdio.h>
int matrix2( int a[2][2]);
int main()
{
    int i,j,a[4][4];
    for(i=0;i<6;i++)
        for(j=0;j<6;j++)
            scanf("%d",&a[i][j]);
    matrix2(a);
    return 0;
}
int matrix4(int *)
{
    int det = a[0][0]*matrix3()
}

int matrix2(int a[2][2])
{
    int det;
    det =(a[0][0]*a[1][1]-a[0][1]*a[1][0]);
    return det ;
}
