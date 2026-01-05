#include <stdio.h>
int main() {
    int W; // Weight in the first set
    // Input the first set weight
    printf("Enter the first set weight: ");
    scanf("%d", &W);

    // Check constraint: 1 <= W <= 100
    if (W < 1 || W > 100) {
        printf("Invalid Input\n");
        return 0;
    }

    // Each new set increases by 10 kg
    // 2nd set = W + 10
    // 3rd set = W + 20
    int third_set = W + 20;

    // Output the weight for the third set
    printf("The weight for the third set is: %d kg\n", third_set);
    return 0;
}