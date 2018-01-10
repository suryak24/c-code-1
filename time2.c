#include<stdio.h>
int main()
{
float min1,hour1,min2,hour2,min,hour;
printf("enter the time in hour and min:");
scanf("%f%f",&hour1,&min1);
printf("\n");
printf("enter the time in hour and min:");
scanf("%f%f",&hour2,&min2);
printf("\n");
min=min1-min2;
hour=hour1-hour2;
printf("the subtracted hour and min are %fhr %fmin",hour,min);
return 0;
}
