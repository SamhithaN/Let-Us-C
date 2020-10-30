#include <stdio.h>
int sum(int n);
int main()
{
    int total,num=25,add1=0;

    while(num!=0)
    {
        add1+=num;
        num--;
    }
    total = sum(25);
    printf("the running sum is %d and %d",total,add1);
    return 0;
}
int sum(int n)
{

    if(n==0)
        return 0;
    return n+sum(n-1);
}
