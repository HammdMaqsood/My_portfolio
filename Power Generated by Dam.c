#include<stdio.h>
#define gravity 9.8
#define efficiency 0.9
int main()
{
    float height,cubic_meters_of_water,mass,work_done,power,megawatts_of_power;
    printf("\nEnter Height of the dam :");
    scanf("%f",&height);
    printf("\nEnter cubic meters of water :");
    scanf("%f",&cubic_meters_of_water);
    mass=cubic_meters_of_water*1000;
    work_done=mass*gravity*height;
    power=efficiency*work_done;
    megawatts_of_power=power/1000000;
    printf("Megawatts of power produced :%f MW",megawatts_of_power);
}
