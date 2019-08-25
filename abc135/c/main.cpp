#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<int> a(n + 1);
  vector<int> b(n);
  rep(i, n + 1) { cin >> a.at(i); }
  rep(i, n) { cin >> b.at(i); }

  int ans = 0;
  rep(i, n) {
    int tmp = min(a.at(i), b.at(i));
    ans += tmp;
    a.at(i) -= tmp;
    b.at(i) -= tmp;

    tmp = min(a.at(i + 1), b.at(i));
    ans += tmp;
    a.at(i + 1) -= tmp;
    b.at(i) -= tmp;
  }

  cout << ans << endl;
  return 0;
}
