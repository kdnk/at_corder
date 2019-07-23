#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  string c1;
  string c2;
  string c3;

  cin >> c1 >> c2 >> c3;

  string ans = "";
  ans += c1.at(0);
  ans += c2.at(1);
  ans += c3.at(2);

  cout << ans << endl;
  return 0;
}
