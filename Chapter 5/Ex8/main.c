#include<stdio.h>
int bin(int );
int main()
{
    int num,result;
    printf("Enter number");
    scanf("%d",&num);
    result = bin(num);
    printf("%d",result);
    return 0;
}
int bin (int num)
{
    if(num==0)
        return 0;
    return (num%2 + 10*bin(num/2));
}
