#include <stdio.h>
int main() {
    int a;
    float b;
    char c;
    double d;

    printf("Enter an Integer, float, character, and double:");
    scanf("%d %f %c %lf", &a, &b, &c, &d);
    printf("Integer Value: %d\n", a);
    printf("Float Value: %f\n", b);
    printf("Character Value: %c\n", c);
    printf("Double Value: %lf\n", d);

    int x, y, temp;
    printf("\nEnter two numbers to swap:");
    scanf("%d %d", &x, &y);
    temp = x;
    x = y;
    y = temp;
    printf("After swapping: x=%d, y=%d\n", x, y);

    return 0;
}