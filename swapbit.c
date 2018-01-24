#include<stdio.h>
int main()
{
    int i,j;
    printf("entet the two numbers");
    scanf("%d%d",&i,&j);
    printf("%d\t%d\n",i,j);
    i ^=j;
    j ^=i;
    i ^=j;
    printf("after swaping:%d %d",i,j);
    return 0;
}
