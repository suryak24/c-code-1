#include <stdio.h>
void main()
{
    int a=18, b=24, i, gcd;
    for(i=1; i <= a && i <= b; ++i)
    {
        if(a%i==0 && b%i==0)
       gcd=i;
    }
    printf("G.C.D of %d and %d is %d", a, b, gcd);
}
