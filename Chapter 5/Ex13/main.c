#include <stdio.h>
#include<math.h>
void accept(int [][10]);
void area(int [][10]);
void length(int *);
void accept(int b[10][10])
{
    int x,y;
    for(x=0;x<3;x++)
    {
        printf("Enter the co-ordinate of point %d",x+1);
        for(y=0;y<2;y++)
        {
            scanf("%d",&b[x][y]);
        }
    }
    area(b);
}
void area(int a[10][10])
{
    float area1;
    area1 =(a[0][0]*(a[1][1]-a[2][1])+ a[1][0]*(a[2][1]-a[0][1])+ a[2][0]*(a[0][1]-a[1][1]))/2;
    printf("The area is %f",fabs(area1));

}
int main()
{
    int points[10][10];
    accept(points);
    return 0;
}
void length(int dist)
{

    dist[i]
}

