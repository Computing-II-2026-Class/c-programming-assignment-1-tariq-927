/* Name: Ssebagala Tariq */
/* Registration Number: 25/U/BIO/029/GV */
/* Student Number: 2500800029 */
#include <stdio.h>
int main()
{
    float amount, fee, total, percent;
    printf("Enter amount to send:");
    scanf("%f", &amount);
    printf("Enter transaction fee percentage:");
    scanf("%f", &percent);
    fee = (percent / 100) * amount;//calculates the transaction fee
    printf("Transaction fee: %.2f\n", fee);
    total = amount + fee; //calculates the total amount to be deducted
    printf("Total deducted: %.2f\n", total);
    printf("----------TRANSACTION SUMMARY----------\n");
    printf("Amount sent: %.2f UGX\n", amount);
    printf("Fee: %.2f UGX\n", fee);
    printf("Total deducted: %.2f UGX\n", total);
     printf("---------------------------------------\n");
     return 0;
}