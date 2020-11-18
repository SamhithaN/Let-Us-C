#include <stdio.h>
 struct s
 {
     int i;
     struct s *p;
 };
int main()
{
    struct s va1,va2;
    va1.i=100;
    va2.i=200;
    va1.p=&va2;
    va2.p=&va1;
    printf("%d%d",va1.p->i,va2.p->i);
    return 0;
}
