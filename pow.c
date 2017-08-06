#include<stdio.h>
void main()
{
int x,n,c=1,y=1;
printf("enter base value:");
scanf("%d",&x);
printf("enter the exponential value:");
scanf("%d",&n);
while(c<=n)
{
y=y*x;
c++;
}
printf("%d^%d=%d",x,n,y);
}
