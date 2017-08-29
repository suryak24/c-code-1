#include<stdio.h>
void main()
{
int n,reverse=0,remainder;
printf("enter the n value:");
scanf("%d",&n);
while(n!=0)
{
remainder=n%10;
reverse=reverse*10+remainder;
n=n/10;
}
printf("the reverse number is %d",reverse);
}
}
