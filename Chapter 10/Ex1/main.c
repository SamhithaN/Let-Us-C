#include <stdio.h>
typedef struct procedure
{
    float dep;
    float withd;
    int code;
}P;
typedef struct bank
{
    int acct;
    char name[20];
    float bal;
    P p;
}bank;

float process(struct bank b[10],int k)
{
        printf("Enter 0 for deposit,1 for withdrawal,2 for exit");
        scanf("%d",&b[k].p.code);
        switch(b[k].p.code)
        {
        case 0:
            printf("Enter deposit amt");
            scanf("%f",&b[k].p.dep);
            b[k].bal+=b[k].p.dep;
            process(b,k);
        case 1:
            printf("Enter withdrawal amount");
            scanf("%f",&b[k].p.withd);
            if(b[k].bal>b[k].p.withd)
            {
                b[k].bal-=b[k].p.withd;
                printf("Transcation successful");
            }
            else
                printf("balance is insuffficient for withdrawal");
            process(b,k);
        case 2:
            break;
        }
        return b[k].bal;

}
int search(struct bank b[10])
{
    int acctnum,i;
    printf("Process: Enter account number");
    scanf("%d",&acctnum);
    for(i=0;i<2;i++)
    {
        if(acctnum==b[i].acct)
            return i;
    }

}

int main()
{
    int i,member;
    bank b[10];
    float final_bal;
    for(i=0;i<2;i++)
    {
    printf("Enter account number %d",i+1);
    scanf("%d",&b[i].acct);
    printf("\nEnter name %d",i+1);
    scanf(" %s",b[i].name);
    printf("\nEnter balance %d",i+1);
    scanf("%f",&b[i].bal);
    }
    member = search(b);
    final_bal=process(b,member);
    printf("The final balnce is %f",final_bal);
    return 0;
}
