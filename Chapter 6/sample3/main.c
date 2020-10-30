#include <stdio.h>
int x=10;
int main()
{
    int x=20;
    {
        int x=30;
        printf("\n%d",x);
    }
    printf("\n%d",x);
    return 0;
}
