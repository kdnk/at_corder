#include <bits/stdc++.h>
using namespace std;
typedef signed long long ll;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  ll l, r;
  cin >> l >> r;

  ll mini = 2019;

  r = min(r, l + 2019);

  for (ll i = l; i < r; i++) {
    for (ll j = i + 1; j <= r; j++) {
      mini = min(mini, (i * j) % 2019);
    }
  }

  cout << mini << endl;
  return 0;
}
