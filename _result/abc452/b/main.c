#include <stdio.h>

int main(void) {
  int H, W;
  scanf("%d %d", &H, &W);

  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      if (i == 0 || i == H - 1) {
        printf("#");
      } else if (j == 0 || j == W - 1) {
        printf("#");
      } else {
        printf(".");
      }
    }
    printf("\n");
  }

  return 0;
}
