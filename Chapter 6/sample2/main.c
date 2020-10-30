#include <stdio.h>

int main()
{
    static int count =5;
    printf("\n count=%d",count--);
    if(count!=0)
        main();
    return 0;
}
