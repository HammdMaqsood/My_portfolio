#include<stdio.h>
int main()
{
    float hours,minutes,time,Temperature;
    printf("\nEnter hours lasped since power failure :");
    scanf("%f",&hours);
    printf("\nEnter minutes lasped since power failure :");
    scanf("%f",&minutes);
    time=hours+(minutes/60);
    Temperature=((4*time*time)/(time+2))-20;
    printf("\nThe temperature is :%f C",Temperature);
}
