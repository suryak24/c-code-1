#include<stdio.h>
#include<conio.h>
void main()
{
long long n;
int c=0;
printf("enter the integer:");
scanf("%d",&n);
while(n!=0)
{
n=n/10;
++c;
}
printf("the count is %d",c);
getch();
}
