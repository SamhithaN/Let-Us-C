#include <stdio.h>

int main()
{
    int level,fail;
    printf("Enter class");
    scanf("%d",&level);
    printf("Enter number of failed subjects");
    scanf("%d",&fail);

    switch(level)
    {
    case 1:
        if(fail>3)
            printf("No grace");
        else
            printf("Grace awarded 5 marks per subject");
        break;
    case 2:
        if(fail>2)
            printf("No grace");
        else
            printf("Grace awarded 4 marks per subject");
        break;

    case 3:
        if(fail>1)
            printf("No grace");
        else
            printf("Grace awarded 5 marks per subject");
        break;

    }

    return 0;
}
