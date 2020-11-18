//Convert number string to integer
#include <stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char s[10];
    int num=0,i,base,j;
    printf("Enter number string");
    gets(s);
    for(i=strlen(s)-1,j=0;i>=0;i--,j++)
    {
        base = pow(10,j);
        num += (s[i]-'0')*base;
    }
    printf("The number is %d",num);
    return 0;
}
