#include <stdio.h>

int main()
{
    int num,div,rem,prime_f=1;
    for(num=2;num<=300;num++)
    {
        prime_f=1;
        for(div=2;div<=num-1;div++)
        {
            rem = num%div;
            if(rem==0)
            {
                prime_f=0;
                break;
            }
        }
        if(prime_f==1)
            printf("%d \t",num);

    }
    return 0;
}
