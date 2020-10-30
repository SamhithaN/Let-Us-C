#include <stdio.h>

int main()
{
    int i;
    for(i=21;i>=0;)
    {
        printf("Pick 1,2,3,4 Matchsticks");
        scanf("%d",&pick);
        i=i-pick;

    }
    return 0;
}
