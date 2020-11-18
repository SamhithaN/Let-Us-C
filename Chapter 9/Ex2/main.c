#include <stdio.h>
#include<stdlib.h>
int main()
{
    char s[20],res[20];
    int i,n,e,j;
    printf("\Enter string");
    gets(s);
    printf("\nEnter extraction point");
    scanf("%d",&n);
    printf("\nEnter number of letters to extract");
    scanf("%d",&e);
    if(e==0)
    {
        puts(s+n-1);
        exit(0);
    }
    for(i=n-1,j=0;i<=n+e-1;i++,j++)
    {
        res[j]=s[i];
    }
    res[j]='\0';
    puts(res);
    return 0;
}
