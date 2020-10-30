#include <stdio.h>
int rec(int );
int fun(int);
int main()
{
    int recursion,function,num;
    printf("Enter number");
    scanf("%d",&num);
    recursion = rec(num);
    function = fun(num);
    printf("%d %d", function,recursion);
    return 0;
}
int fun(int num1)
{
    int dig,sum=0;
    while (num1>0)
    {
        dig = num1%10;
        sum+= dig;
        num1 /=10;
    }
    return sum;
}
int rec(int num2)
{
    if(num2==0)
        return 0;
    else
        return (num2%10 + rec(num2/10));

}
