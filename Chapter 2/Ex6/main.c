#include <stdio.h>

int main()
{
    char charc;
    printf("Enter character");
    scanf("%c",&charc);

        if(charc>=65&&charc<=90)
            printf("Capital letter");
        if(charc>=97&&charc<=122)
            printf("Small letter");
        if(charc>=48&&charc<=57)
            printf("Number");
        if((charc>=0&&charc<=47)||(charc>=58&&charc<=64))
            printf("special symbol");
        if((charc>=91&&charc<=96)||(charc>=123&&charc<=127))
            printf("special symbol");

    return 0;
}
