#include <stdio.h>

struct machine
{
    char serial[3];
    char material[10];
    int year,quantity;
}Mach;
void retrieve(struct m);
void store(struct m);
int main()
{
    struct Mach m[20];
    store(m);
    retrieve(m);
    return 0;
}

void store(struct Mach m[20])
{
    int k=0;
    for(char bet=65;bet<'G';bet++)
    {
        for(int i=0;i<9;i++,k++)
        {

            m[k].serial[0]= bet;
            m[k].serial[1]= bet;
            m[k].serial[2] = i+1;
            m[k].serial[3] = '\0';

            printf("Enter year of manufacture");
            scanf("%d",&m[k].year);
            printf("Enter material");
            scanf("%s",m[k].material);
            printf("Enter quantity manufactured");
            scanf("%d",&m[k].quantity);
        }
    }
}

void retrieve(struct Mach m[20])
{
    printf("Serial Number\t\tYear of manufacture\t\tMaterial\t\tQuantity");
    if(m.serial[0]='B')
    {
        for(int i=1;i<=9;i++)
        {
            printf("%s",m[i].serial);
            printf("\t\t%d",m[i].year);
            printf("\t\t%s",m[i].material);
            printf("\t\t%d",m[i].quantity);
        }
    }
    if(m.serial[0]='C')
    {
        for(int i=1;i<=6;i++)
        {
            printf("%s",m[i].serial);
            printf("\t\t%d",m[i].year);
            printf("\t\t%s",m[i].material);
            printf("\t\t%d",m[i].quantity);
        }
    }

}


