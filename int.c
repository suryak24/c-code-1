#include<stdio.h>
#include<conio.h>
void main()
{
int n,s=0;
clrscr();
printf("Emter the number");
scanf("%d",&n);
while(n!=0)
{
n=n/10;
s++;
}
printf("%d",s);
getch();
}
