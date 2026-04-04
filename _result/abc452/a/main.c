#include <stdio.h>

int main(void) {
  int M, D;
  scanf("%d %d", &M, &D);

  if (M == 1 && D == 7) {
    printf("Yes\n");
    return (0);
  }

  if (M == 3 && M == D) {
    printf("Yes\n");
    return (0);
  }

  if (M == 5 && M == D) {
    printf("Yes\n");
    return (0);
  }

  if (M == 7 && M == D) {
    printf("Yes\n");
    return (0);
  }

  if (M == 9 && M == D) {
    printf("Yes\n");
    return (0);
  }

  printf("No\n");

  return 0;
}
