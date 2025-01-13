#include <stdio.h>

int main() {
  int x, y, t;
  scanf("%d %d %d", &x, &t, &y);
  if (y == 0) {
    printf("Forever\n");
    return 0;
  }
  double halfDis = x * t;
  int totalTime = t + halfDis / y;
  if (totalTime > 2676275) {
    printf("Forever\n");
    return 0;
  }
  printf("%d\n", totalTime);
  return 0;
}
