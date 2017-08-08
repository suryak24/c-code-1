#include<stdio.h>
#include<conio.h>
void main()
{
int m,n,i;
  clrscr();
printf("enter the intervale:");
scanf("%d%d",&m,&n);
for(i=m;i<=n;i++)
{
if((i%2)!=0)
{
printf("%d\n",i);
}
}
  getch();
}
