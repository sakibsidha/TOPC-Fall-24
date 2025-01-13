#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char s[] = "nevillelongbottom";
  int ans = 0;
  for (int i = 0; i < (int)strlen(s); ++i) {
    ans += (s[i] - 'a' + 1);
  }
  printf("%d\n", ans);
  return 0;
}
