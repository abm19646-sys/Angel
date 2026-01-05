#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    // formula: sum = n * (n + 1) / 2
    int sum = n * (n + 1) / 2;
    printf("SUM = %d", sum);
    return 0;
}