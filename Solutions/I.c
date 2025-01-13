#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int n, k, last;
  scanf("%d %d", &n, &k);
  last = n;
  for (int i = 1; i <= k; ++i) {
    last = n;
    char s[5];
    sprintf(s, "%04d", n);
    int len = strlen(s);
    for (int j = 0; j < len - 1; ++j) {
      for (int l = j + 1; l < len; ++l) {
        if (s[j] > s[l]) {
          char temp = s[j];
          s[j] = s[l];
          s[l] = temp;
        }
      }
    }
    int b = atoi(s);
    for (int j = 0; j < len - 1; ++j) {
      for (int l = j + 1; l < len; ++l) {
        if (s[j] < s[l]) {
          char temp = s[j];
          s[j] = s[l];
          s[l] = temp;
        }
      }
    }
    int a = atoi(s);
    n = a - b;
    if (n == last) break;
  }
  printf("%d\n", n);
  return 0;
}
