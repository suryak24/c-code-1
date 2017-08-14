
# include <stdio.h>
void main()
{
int i, a, r, s, n ;
printf("Enter the limit : ") ;
scanf("%d", &n) ;
printf("\nThe armstrong numbers are :\n\n") ;
for(i = 0 ; i <= n ; i++)
{
a = i ;
s = 0 ;
while(a > 0)
{
r = a % 10 ;
s = s + (r * r * r) ;
a = a / 10 ;
}
if(i == s)
printf("%d\t", i) ;
}
}
