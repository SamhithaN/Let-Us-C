#include <stdio.h>
void all_num(int);

int main()
{
    int num;
    printf("Enter number");
    scanf("%d",&num);
    all_num(num);
    return 0;
}
void all_num(int num1)
{
    int num,div,rem,prime_f=1;
    for(num=2;num<=num1;num++)
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
        {
            if(num1%num==0)
            {
                while(num1)

                printf("%d \t",num);

        }
    }

}
