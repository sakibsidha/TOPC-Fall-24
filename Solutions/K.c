#include <stdio.h>
#include <limits.h>

int main() {
  int n, mx = INT_MIN, mx_idx = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    int x;
    scanf("%d", &x);
    if (x >= mx) {
      mx = x;
      mx_idx = i;
    }
  }
  printf("%d\n", (mx_idx < n - mx_idx) ? mx_idx : n - mx_idx);
  return 0;
}
