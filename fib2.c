#include<stdio.h>
void main()
{
int a,b,n,i,m;
printf("enter the number:");
scanf("%d",&n);
a=0;
b=1;
m=0;
for(i=0;i<n;i++)
{
printf("%d\n",m);
a=b;
b=m;
m=a+b;
}
}
