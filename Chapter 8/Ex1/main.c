#include <stdio.h>
void accept(int *);
void search(int *,int);
int main()
{
    int arr[10];
    accept(arr);
    return 0;
}
void accept(int b[10])
{
    int i,key;
    printf("Enter elements of array");
    for(i=0;i<10;i++)
        scanf("%d",&b[i]);
    printf("Enter key element");
    scanf("%d",&key);
    search(b,key);
}
void search(int c[10],int key1)
{
    int j,num=0;
    for(j=0;j<10;j++)
    {
        if(c[j]==key1)
            num++;
    }
    if(num==0)
        printf("Element not found");
    else
        printf("Element found %d times",num);
}
