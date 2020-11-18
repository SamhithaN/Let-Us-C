#include <stdio.h>

int main()
{
    int size=10,a[size],i;
    printf("Ënter balues");
    for(i=1;i<=3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=3;i++)
    {
        printf("\n%d",a[i]);
    }
    return 0;
}
