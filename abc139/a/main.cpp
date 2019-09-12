#include <bits/stdc++.h>
using namespace std;
typedef signed long long ll;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  string s, t;
  cin >> s >> t;

  int ans = 0;
  if (s[0] == t[0]) {
    ans++;
  }
  if (s[1] == t[1]) {
    ans++;
  }
  if (s[2] == t[2]) {
    ans++;
  }

  cout << ans << endl;

  return 0;
}
