#include <stdio.h>
float x=4.5;
float f(float );
int main()
{
    float y;
    x*=2.0;
    y=f(x);
    printf("%f\t%f",x,y);
    return 0;
}
float f(float a)
{
    a+=1.3;
    x-=4.5;
    return(a+x);
}
