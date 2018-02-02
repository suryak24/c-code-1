#include<stdio.h>
#include<conio.h>
void main()
{
char s[100],t[100],i,j,a,b;
clrscr();
printf("Enter then first string:\n");
scanf("%s",s[i]);
printf("Enetr the second string:\n");
scanf("%s",t[j]);
a=strlen(s[i]);
b=strlen(t[j]);
if(a>b)
{
printf("%s",s[i]);
}
else if(b>a)
{
printf("%s",t[j]);
}
else
{
printf("%s or %s",s[i],t[j]);
}
getch();
}
