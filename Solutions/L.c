#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
  char s[100001];
  int n;
  scanf("%s %d", s, &n);
  while (n--) {
    int l, r;
    scanf("%d %d", &l, &r);
    l--, r--;
    if (r - l + 1 > 26) printf("NO\n");
    else {
      bool mark[26] = {0}, fl = false;
      for (int i = l; i <= r; ++i) {
        if (mark[s[i] - 'a']) {
          fl = true;
          break;
        }
        mark[s[i] - 'a'] = true;
      }
      printf(fl ? "NO\n" : "YES\n");
    }
  }
  return 0;
}
