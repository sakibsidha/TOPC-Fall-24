#include <stdio.h>

int main() {
  int n, k;
  scanf("%d %d", &n, &k);
  int a[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (a[i] * 1LL * a[j] == k) cnt++;
    }
  }
  printf("%d\n", cnt);
  return 0;
}
