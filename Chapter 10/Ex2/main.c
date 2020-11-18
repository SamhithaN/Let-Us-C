#include <stdio.h>
#include<stdlib.h>
typedef struct cricket
{
    char name[20];
    int match;
    int avg_runs[10];
}crik;
void accept(struct crik *);
void display(struct crik *,int sum);
int comparetor (const void * a, const void * b);
int main()
{
    crik c[3];
    accept(c);
    return 0;
}
void accept(struct crik c[3])
{
    int sum=0;
    for(int i=0;i<3;i++)
    {
        printf("%d) Enter name",i+1);
        scanf("%s",&c[i].name);
        printf("%d) Enter nuber of test matches",i+1);
        scanf("%d",&c[i].match);
        printf("%d) Enter average runs per test match",i+1);
        sum +=c[i].match;
        for(int j=0;j<c[i].match;j++)
            scanf("%f",&c[i].avg_runs[j]);
    }
    display(c,sum);
}
void display(struct crik c[3],int sum)
{
    int i;
    qsort (c.avg_runs, sum, sizeof(float), comparetor);
    for (i=0; i<sum; i++)
        printf ("%d\n",                                                                                edfdsefrdedrfdedrftgr4eder4edf45frftftt5ft5f545f5f4feeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeereeeeeeeeeeeeeeeeeeeeew3ssssqqqqqqqqqqqqqAAAAAAAAAAAAAavg_runs[i]);
}
int comparetor (const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}
