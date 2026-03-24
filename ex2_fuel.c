/* Name: Ssebagala Tariq */
/* Registration Number: 25/U/BIO/029/GV */
/* Student Number: 2500800029 */
#include <stdio.h>
int main()
{
    float distance, fuel, efficiency;
    printf("Enter distance(km):");//enter distance traveled in kilometers
    scanf("%f", &distance);
    printf("Enter fuel used(litres):");//enter fuel used in liters
    scanf("%f", &fuel);
    efficiency = distance / fuel;// calculates fuel efficiency in km/litre
    printf("Fuel efficiency is: %.2f km/litre", efficiency);
    return 0;
}
