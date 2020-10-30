#include <stdio.h>
int fact (int );
int main()
{
    int num,result;
    printf("Enter the number");
    scanf("%d",&num);
    result = fact(num);
    printf("The factorial is %d",result);
    return 0;
}
int fact(int num)
{
    if (num==1)
        return 1;
    else
        return fact(num-1) * num;
}
