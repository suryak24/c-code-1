#include<stdio.h>
int main()
{
int a[10],i,maximum;
for(i=0;i<10;i++)
{
scanf("%d\n",&a[i]);
}
for(i=0;i<10;i++)
{
if(a[i]>maximum)
{
maximum=a[i];
}
}
printf("%d",maximum);
}
