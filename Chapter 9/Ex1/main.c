#include <stdio.h>

int main()
{
    char s[20];
    printf("enter string");
    gets(s);
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]>64 && s[i]<=90)
        {
            s[i]+=32;
        }
    }
    printf("result:");
    puts(s);
    return 0;
}
