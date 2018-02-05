#include<stdio.h>
int main()
{
int n,m[100],i,avg,add=0;
printf("Enetr the n values:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    scanf("%d",&m[i]);
    printf("\n%d\n",m[i]);
}
for(i=1;i<=n;i++)
{
    add=add+m[i];
}
avg=add/n;
printf("avg:%d",avg);
return 0;
}
