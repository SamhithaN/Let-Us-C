#include <stdio.h>

int main()
{
    char ch;
    for(ch=1;ch<=225;ch++)
    {
       printf("\n%d,%c",ch,ch);
    if(ch==0)
            break;
    }
    ch=291;
    printf("%d%c",ch,ch);
    return 0;
}
