#include <stdio.h>
#include<math.h>
int main()
{
    int a,b,c,lar,sec_large,small;
    printf("Enter sides of tringle");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&b==c)
        printf("Equilateral");
    else if(a==b||b==c||c==a)
        printf("Isoceles");
    else
        printf("Scalene");
    lar = a>b?(a>c?a:c):(b>c?b:c);
    sec_large = a>b?(b>c?b:(c>a?a:c)):(a>c?a:(c>b?b:c));
    small = a<b?(a<c?a:c):(b<c?b:c);
    printf("%d%d%d",lar,sec_large,small);
    if(pow(small,2) + pow(sec_large,2)== pow(lar,2))
        printf("Right angle triangle");

    return 0;
}
