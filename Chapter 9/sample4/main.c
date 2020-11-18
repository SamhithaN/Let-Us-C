#include <stdio.h>
void array()
{
    char arr[8]="Rhombus";
    int i;
    for(i=0;i<=7;i++)
    {
        printf("\n%d",*arr);
        arr+=1;
    }
}

int main()
{
    int arr[]={'A','B','C','D'};
    int i;
    for(i=0;i<=3;i++)
        printf("\n%d",arr[i]);
    array();
    return 0;

}
