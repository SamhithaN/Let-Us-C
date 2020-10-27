#include <stdio.h>

int main()
{
    int a[3][2],i,j;
    printf("Enter points");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
           scanf("%d",&a[i][j]);
        }

    }
    if((a[0][0] == a[1][0] && a[0][0] == a[2][0])|| (a[0][1] == a[1][1] && a[0][1] == a[2][1]))
        printf("Points on same line");
    else
        printf("points are not collinear");
    return 0;
}
