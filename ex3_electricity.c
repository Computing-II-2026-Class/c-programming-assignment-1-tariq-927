/* Name: Ssebagala Tariq */
/* Registration number: 25/U/BIO/029/GV */
/* Student Number: 2500800029*/
#include <stdio.h>
int main()
{
    float units, cost, total;
    printf("Enter units consumed:");
    scanf("%f", &units);
    printf("Enter cost per unit:");
    scanf("%f", &cost);
    total = units * cost;// calculates the total electricity bill
    printf("Total bill: %.2f\n", total);
    return 0;
}
