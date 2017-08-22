#include<stdio.h>
void main()
{
int a,b,n,i,c;
printf("enter the number:");
scanf("%d",&n);
a=0;
b=1;
c=0;
for(i=0;i<n;i++)
{
printf("%d\n",c);
a=b;
b=c;
c=a+b;
}
}
