#include <stdio.h>

int main()
{
    int a[100];
    for(int i=0;i<100;i++)
        a[i]=i+1;

    for(int i=1;i<100;i++)
    {
        if(a[i]!=0)
        {
            for(int j=i+1;j<100;j++)
            {
                if(a[j]!=0)
                    if(a[j]%a[i]==0)
                        a[j]=0;
            }
        }
    }
    for(int i=0;i<100;i++)
        if(a[i]!=0)
            printf("\t%d",a[i]);


    return 0;
}
