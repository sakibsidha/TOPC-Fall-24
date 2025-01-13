#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int total_layer = (n + 1) / 2;
  char a[n][n];
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      scanf(" %c", &a[i][j]);
    }
  }
  int q;
  scanf("%d", &q);
  while (q--) {
    int layer;
    char c;
    scanf("%d %c", &layer, &c);
    if (n%2 == 1 && layer == 1) {
      if (a[total_layer-1][total_layer-1] == c) printf("1\n");
      else printf("0\n");
      continue;
    }
    int k = total_layer - layer, ans = 0;
    for (int i = k, len = 1; len <= n - (2 * k); ++i, ++len) {
      if (a[k][i] == c) ans++;
      if (a[n-1-k][i] == c) ans++;
    }
    for (int i = k + 1, len = 1; len <= n - (2 *k) - 2; ++i, ++len) {
      if (a[i][n-1-k] == c) ans++;
      if (a[i][k] == c) ans++;
    }
    printf("%d\n", ans);
  }
  return 0;
}
