#include<stdio.h>
#include<math.h>
//float sine(float, int n);
int numerator(float x,int n);
int factorial(int);
int main()
{
    float res=0,x;

    printf("Enter value for x");
    scanf("%f",&x);
    for(int i=0,j=2;i<=11;i+=2,j++)
        res= res + pow(-1,j)*numerator(x,i)/factorial(i);
   // sine(x,11);
    printf("%f \n",res);
    printf("%f",sin(x));
}
/*float sine(float x,int n)
{
    float sum=0;
    if (x==1)
        return x/1;
    return (sum + x*sine(x,n-2)/factorial(n-2));
}*/
int factorial(int n)
{
    if(n==1)
        return 1;
    return n*factorial(n-1);
}
int numerator(float x,int n)
{
    if(n==0)
        return 1;
    return x*numerator(x,n-1);

}
