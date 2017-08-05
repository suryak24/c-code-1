#include<stdio.h>
void main()
{
long long n;
int c=0;
printf("enter the value for n:");
scanf("%d",&n);
while(n!=0)
{
n=n/10;
++c;
}
printf("the counter is :%d",c);
}
