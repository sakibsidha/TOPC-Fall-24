#include <stdio.h>

int main() {
  int y, x, a, b, c;
  scanf("%d %d", &x, &y);
  scanf("%d %d %d", &a, &b, &c);
  if ((a + b + c) >= x) printf("Chill guy\n");
  else if ((a + b + c) >= y) printf("Who knows\n");
  else printf("A bad day\n");
  return 0;
}
