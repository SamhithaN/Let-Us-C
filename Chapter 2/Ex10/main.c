#include <stdio.h>
void print(int num[10],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d",num[i]);
    }
    printf("\n");
}

int main()
{
    int num[10],i,j,n,temp;
    printf("Enter number of digits");
    scanf("%d",&n);
    printf("Enter the numbers");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(j=1;j<=n;j++)
    {
        for(i=0;i<n-1;i++)
        {
            temp=num[i];
            num[i]=num[i+1];
            num[i+1]=temp;
            print(num,n);
        }
    }
    return 0;
}
