#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  string s;
  cin >> s;

  int ans = 0;
  rep(i, 3) {
    if (s.at(i) == '1') {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
