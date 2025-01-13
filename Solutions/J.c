#include <stdio.h>
#include <stdbool.h>

#define mxN 10000000
bool prime[mxN + 1];

void sieve() {
  for (int i = 0; i <= mxN; ++i) prime[i] = false;
  prime[0] = prime[1] = true;
  for (int i = 2; i * i <= mxN; ++i) {
    if (!prime[i]) {
      for (int j = i + i; j <= mxN; j += i) {
        prime[j] = true;
      }
    }
  }
}

int main() {
  sieve();
  int l, r, cnt = 0;
  scanf("%d %d", &l, &r);
  for (int i = l; i <= r - 2; ++i) {
    if (!prime[i] && !prime[i + 2]) {
      cnt++;
    }
  }
  if (l <= 2) cnt *= 2;
  printf("%d\n", cnt);
  return 0;
}
