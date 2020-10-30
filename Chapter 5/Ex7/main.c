#include <stdio.h>
void func(int, int);
int fib(int);
int main()
{
    int fibj,fib0=0,fib1=1,j;
    printf("%d %d ",fib0,fib1);
    func(fib0,fib1);
    printf(" \n \n %d %d ",fib0,fib1);
    for(j=2;j<=25;j++)
    {
        fibj= fib(j);
        printf("%d ",fibj);
    }

    return 0;
}
void func(int fib0,int fib1)
{
    int i,fibi;
    for(i=2;i<=25;i++)
    {
        fibi=fib0+fib1;
        fib0=fib1;
        fib1=fibi;
        printf("%d ",fibi);
    }

}
int fib(int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    return fib(n-1)+fib(n-2);
}
