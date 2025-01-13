#include <stdio.h>
#define ll long long

const int mod = 1000000007;

ll get(ll st, ll ed, ll n) {
  ll sum = (n * (st + ed)) / 2;
  return sum % mod;
}

void solve() {
  ll s, e;
  scanf("%lld %lld", &s, &e);
  if (s > e) {
    ll temp = s;
    s = e;
    e = temp;
  }
  if (s == e) {
    printf("%lld\n", e);
    return;
  }
  ll df = e - s, ans = 0;
  for (ll r = 1; r * r <= df; r++) {
    if (df % r == 0) {
      ll n = df / r;
      ans += get(s, e, n + 1);
      ans %= mod;
      if (n != r) {
        ans += get(s, e, r + 1);
        ans %= mod;
      }
    }
  }
  printf("%lld\n", ans);
}

int main() {
  int tt;
  scanf("%d", &tt);
  while (tt--) {
    solve();
  }
  return 0;
}
