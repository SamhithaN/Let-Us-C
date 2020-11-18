#include<stdio.h>
#include<stdlib.h>
void accept(int *);
void bubble(int *);
void selection(int *);
void insertion(int *);
void display(int *);
int main()
{
    int arr[4];
    char ch;
    insertion(arr);
    while(1)
    {
          printf("Enter accept = a, display=d, selection = s, bubble=b, insertion=i, exit=e \n");
          scanf(" %c",&ch);
          switch(ch)
          {
          case'a':
              accept(arr);
              break;
          case'd':
              display(arr);
              break;
          case's':
              selection(arr);
              break;
          case'b':
              bubble(arr);
              break;
          case'i':
              insertion(arr);
              break;
          case'e':
              exit(0);
          }
    }
    return 0;
}
void selection(int s[4])
{
    int iter,ele,temp;
    for(iter=0;iter<4;iter++)
        for(ele=iter;ele<=4-iter;ele++)
        {
            if(s[iter]>s[ele+1])
            {
                temp = s[ele+1];
                s[ele+1]=s[iter];
                s[iter]=temp;
            }
        }
    printf("Sort completed \n \n");
}
void bubble(int b[4])
{
    int iter,ele,temp;
    for(iter=0;iter<4;iter++)
        for(ele=0;ele<4-iter;ele++)
        {
            if(b[ele]>b[ele+1])
            {
                temp = b[ele+1];
                b[ele+1]=b[ele];
                b[ele]=temp;
            }
        }
    printf("Sort completed \n");
}
void insertion(int y[4])
{
    accept(y);
    int iter,temp,check;
    /*for( int i = 0 ;i < n ; i++ )
    {
        int temp = A[ i ];
        int j = i;
        while(  j > 0  && temp < A[ j -1])
        {
            // moving the left side element to one position forward.
            A[ j ] = A[ j-1];
            j= j - 1;
        }
        // moving current element to its  correct position.
        A[ j ] = temp;
    }*/

    for(iter=1;iter<4;iter++)
    {
        for(check=0;check<iter;check++)
        {
            if(y[iter]<y[check])
            {
                temp = y[iter];
                for(int i=iter;i>check;i--)
                {
                    y[i]=y[i-1];
                }
                y[check]=temp ;
            }
        }
    }
    printf("Sort completed \n \n");
    display(y);
}
void accept(int a[4])
{
    int i;
    printf("Enter 4 elements \n");
    for(i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
    }
}
void display(int a[4])
{
    int i;
    printf("The elements are: \n");
    for(i=0;i<4;i++)
    {
        printf("\t %d",a[i]);
    }
}
