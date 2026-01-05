#include <stdio.h>
int main() { Int A, B;
// Asking for Inputs
printf("Enter the price of the Diwali gift (A): ");
scanf("%d", &A);
printf("Enter the value of the discount voucher (B): ");
scanf("%d", &B);
// Check constraints
if (A < 1 || A > 5000 || B < 1 || B > 5000) {
printf("Invalid Input. Please enter values between 1 and 5000.\n");
return 0;
}
// Calculate amount to pay
if (B > A)
printf("Rohan has to pay: \n");
else
printf("Rohan has to pay: %d\n", A - B);
return 0;
}