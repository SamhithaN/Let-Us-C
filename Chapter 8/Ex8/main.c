#include <stdio.h>
#include<math.h>

int num1(int n,float a[n][2])
{
    int sum=0;
    for(int i=0;i<n;i++)
        sum += a[i][0]*a[i][1];
    return sum;
}
int num2(int n,float a[n][2])
{
    int sum1=0,sum2=0;
    for(int i=0;i<n;i++)
    {
        sum1 += a[i][0];
        sum2 += a[i][1];
    }
    return sum1*sum2;
}

int denom1(int n,float a[n][2])
{
    int sum1=0,sum2=0;
    for(int i=0;i<n;i++)
    {
        sum1 += pow(a[i][0],2);
        sum2 += a[i][0];
    }
    return n*sum1-pow(sum2,2);
}
int denom2(int n,float a[n][2])
{
    int sum1=0,sum2=0;
    for(int i=0;i<n;i++)
    {
        sum1 += pow(a[i][1],2);
        sum2 += a[i][1];
    }
    return n*sum1-pow(sum2,2);
}
int main()
{
    int n,i,j;
    float coeff_r,a[n][2],num,denom;
    printf("Enter number of points");
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        printf("Enter point %d",j+1);
        for(i=0;i<2;i++)
            scanf("%f",&a[j][i]);
    }
    num = num1(n,a)*num2(n,a);
    denom = pow((denom1(n,a)*denom2(n,a)),0.5);
    coeff_r = num/denom;
    printf("The correlation coefficient is %f",coeff_r);
    return 0;
}
