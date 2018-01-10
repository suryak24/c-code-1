#include<stdio.h>
int main()
{
float min,hour;
printf("enter the time in minutes:");
scanf("%f",&min);
printf("\n");
hour=min/60;
printf("the given time in  %fhr %min",hour,min);
return 0;
}
