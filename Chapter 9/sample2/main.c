#include <stdio.h>

int main()
{
    char s[]="fffffffffffff wwwwwwwww ",t[25];
    char *ss,*tt;
    ss=s;
    while(*ss!='\0')
        *ss++=*tt++;
    printf("\n%s",t);
    return 0;
}
