#include <stdio.h>

int main()
{
    int a,b,c,sec_large;
    printf("Enter");
    scanf("%d%d%d",&a,&b,&c);
    sec_large = a>b?(b>c?b:(c>a?a:c)):(a>c?a:(c>b?b:c));
    printf("%d",sec_large);

    return 0;
}
