#include<stdio.h>
int main()
{
int n,reverse=0,remainder,tc,Ω=1;
printf("enter the n value:");
scanf("%d",&n);
printf("%d",n);
while(n!=0)
{
remainder=n%10;
reverse=reverse*10+remainder;
n=n/10;
}
printf("the reverse number is %d",reverse);
tc=Ω(nlog(n));
printf("tc:%d",tc);
return 0;
}
