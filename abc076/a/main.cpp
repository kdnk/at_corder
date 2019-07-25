#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int r, g;
  cin >> r >> g;

  int ans;
  ans = g * 2 - r;
  cout << ans << endl;
  return 0;
}
