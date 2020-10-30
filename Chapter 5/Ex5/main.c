#include <stdio.h>
#include<math.h>
void primeFactors(int );
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    primeFactors(n);
    return 0;
}
void primeFactors(int n)
{

    while (n%2 == 0) // Print the number of 2s that divide n
    {
        printf("%d ", 2);
        n = n/2;
    }


    for (int i = 3; i <= sqrt(n); i = i+2)  // n must be odd at this point. Skip one element(Note i = i +2)
    {
        // While i divides n, print i and divide n
        while (n%i == 0)
        {
            printf("%d ", i);
            n = n/i;
        }
    }

    // This condition is to handle the case when n is a prime number greater than 2
    if (n > 2)
        printf ("%d ", n);
}

