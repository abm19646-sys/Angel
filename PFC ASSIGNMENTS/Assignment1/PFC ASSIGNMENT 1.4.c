#include <stdio.h>
int main() {
float num;
printf("Enter a floating number: ");
scanf("%f", &num);
printf("Welcome to the Floating Fortune Teller!\n");
printf("X %f\n", num);
printf("X .1f\n", num);
printf("X .2f\n", num);
printf("X .2f\n", num);
printf("X .3f\n", num);
printf("X .4f\n", num);
printf("%c\n", num);
printf("%i\n", num);
printf("Xg\n", num);
printf(">");
return 0;
}