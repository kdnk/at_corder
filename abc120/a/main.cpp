#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int a, b, c;
  cin >> a >> b >> c;

  int max = b / a;
  int ans;

  if (c <= max) {
    ans = c;
  } else {
    ans = max;
  }

  cout << ans << endl;
  return 0;
}
