#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int x, a, b;
  cin >> x >> a >> b;

  int ans = x;
  ans = x - a;

  while (b <= ans) {
    ans = ans - b;
  }

  cout << ans << endl;
  return 0;
}
