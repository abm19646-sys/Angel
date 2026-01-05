#include <stdio.h>
int main() {
    int n, count = 0;
    scanf("%d", &n);
    for(int i=1; i < n; i++) {
        if(n%i) {
            count++;
        }
        if(count == 2) {
            printf("The given number is Prime");
        } else {
            printf("The given number is Non-Prime");
            return 0;
        }
    }
}