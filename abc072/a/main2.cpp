#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int x, t, ans;
  cin >> x >> t;
  if (x - t <= 0) {
    ans = 0;
  } else {
    ans = x - t;
  }
  cout << ans << endl;
  return 0;
}
