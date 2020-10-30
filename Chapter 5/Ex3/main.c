#include <stdio.h>
void romanpre(char c1,char c2);
void romanpost(char c, int n);
int I=0;
char val[100];
int main()
{
    int num,k;
    printf("enter num");
    scanf("%d",&num);
    while(num!=0)
    {
        if (num>=1000)
        {
            romanpost('m',num/1000);
            num = num - (num/1000)*1000;
        }
        else if(num>=500)
        {
            if(num<900)
            {
                romanpost('d',num/500);
                num = num - (num/500)*500;
            }
            else
            {
                romanpre('c','m');
                num = num - 900;
            }
        }
        else if(num>=100)
        {
            if(num<400)
            {
                romanpost('c',num/100);
                num = num - (num/100)*100;
            }
            else
            {
                romanpre('l','d');
                num -= 400;
            }
        }
        else if(num>=50)
        {
            if(num<90)
            {
                romanpost('l',num/50);
                num -= 50*(num/50);
            }
            else
            {
                romanpre('x','c');
                num -= 40;
            }
        }
        else if (num >= 10)
        {
            if (num < (40))
            {
                romanpost('x', num / 10);
                num = num - (num / 10) * 10;
            }
            else
            {
                romanpre('x','l');
                num = num - (40);
            }
        }
        else if (num >= 5)
        {
            if (num < (9))
            {
                romanpost('v', num / 5);
                num = num - (num / 5) * 5;
            }
            else
            {
                romanpre('i', 'x');
                num = num - (9);
            }
        }
        else if (num >= 1)
        {
            if (num < 4)
            {
                romanpost('i', num / 1);
                num = num - (num / 1) * 1;
            }
            else
            {
                romanpre('i', 'v');
                num = num - (4);
            }
        }
    }
    printf("The roman number is ");
    for(k=0;k<=I;k++)
        printf("%c",val[k]);
    return 0;
}
void romanpost(char C,int n)
{
    int j;
    for(j=0;j<n;j++)
        val[I++]= C;
}
void romanpre(char c1,char c2)
{
    val[I++]=c1;
    val[I++]=c2;
}

