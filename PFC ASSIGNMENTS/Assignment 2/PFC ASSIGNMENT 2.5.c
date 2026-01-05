#include <stdio.h>

int main()
{
    int N = 9;
    int total_leaves;
    total_leaves = (N * 4 - 1) * 7 * 3 + 4 * (N - 1);
    printf("%d", total_leaves);
    return 0;
}