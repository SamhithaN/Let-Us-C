#include <stdio.h>
#include<dos.h>
int main()
{
    int puz[4][4]=
    {
        1,4,15,7,
        8,10,2,11,
        14,3,6,13,
        12,9,5
    };
    display(puz);
    key = getkey();




    return 0;
}
void display(int a[4][4])
{
    int i,j;
    for(i=0;i<4;i++)
    {
            for(j=0;j<4;j++)
                printf("\t%d",a[i][j]);
            printf("\n");
    }
}
int getkey()
{
    union REGS i,o;
    while(!kbhit())
        ;
    i.h.ah=0;
    int86(22,&i,&o);
    return(o.h.ah);
}

