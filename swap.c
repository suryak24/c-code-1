#include<stdio.h>
int main()
{
    int i,j,temp;
    printf("entet the two numbers");
    scanf("%d%d",&i,&j);
    printf("%d\t%d\n",i,j);
    temp=i;
    i=j;
    j=temp;
    printf("after swaping:%d %d",i,j);
    return 0;
}
