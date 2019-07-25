#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  string n;
  cin >> n;

  string ans = "No";
  rep(i, 2) {
    if (n.at(i) == '9') {
      ans = "Yes";
    }
  }
  cout << ans << endl;
  return 0;
}
