#include <stdio.h>
Int main() {
  Int A, B;
  printf("Enter morning and evening cloud counts (1 to 20): ");
  scanf("%d %d", &A, &B);
  if (A >= 4 && A <= 20 && B >= 5 && B <= 20) {
    if (B >= A) {
      printf("rain\n");
    } else {
      printf("dry\n");
    }
  } else {
    printf("dry\n");
  }
  return 0;
}