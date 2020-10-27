#include <stdio.h>

int main()
{
    int d_100,d_10,d_50,amt;
    printf("Enter amount");
    scanf("%d",&amt);
    d_100 = amt/100;
    printf("No of 100s = %d \n",d_100);
    d_50 = amt%100;
    if(d_50>=50)
    {
        printf("No of 50s = %d \n",1);
        d_10=d_50-50;
        printf("No of 10s = %d \n",d_10/10);
    }
    else
    {
        printf("No of 50s = %d \n",0);
        printf("No of 10s = %d",d_50/10);
    }
    return 0;
}
