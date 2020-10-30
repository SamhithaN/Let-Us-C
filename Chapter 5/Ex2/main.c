#include <stdio.h>
int power(int,int);
int main()
{
    int base,pow,result;
    printf("Enter base number");
    scanf("%d",&base);
    printf("Enter power number");
    scanf("%d",&pow);
    result = power(base,pow);
    printf("Result is %d",result);
    return 0;
}
int power(int base,int pow)
{
    if (pow==0)
        return 1;
    else
        return power(base,pow-1)*base;

}
