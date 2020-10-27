#include <stdio.h>

int main()
{
    float marka,markb;
    printf("Enter marks in subject A and B");
    scanf("%f%f",&marka,&markb);
    if(marka>=55&&markb>=45)
        printf("Pass");
    else if(marka>=45&&markb>=55)
        printf("Pass");
    else if(marka>=65&&markb<=45)
        printf("Reappear in B exam");
    else
        printf("Fail");


    return 0;
}
