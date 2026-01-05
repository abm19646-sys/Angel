#include <stdio.h>

int main() {
    char ch;        // Student's initial (character)
    int days;       // Number of days overdue
    float rate;     // Fine rate per day
    float fine;     // Total fine amount

    // Taking Input: ch days rate
    scanf("%c%d %f", &ch, &days, &rate);

    // Calculating total fine
    fine = days * rate;

    // Printing formatted receipt
    printf("Library Receipt\v");
    printf("\nMember Initial:\t%c", ch);
    printf("\nDays:\t\t%05d", days);
    printf("\nFine:\t\t%.2f TUR", fine);

    return 0;
}