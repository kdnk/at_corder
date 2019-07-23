#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  string s;
  cin >> s;

  int sum = 0;
  rep(i, 4) {
    if (s.at(i) == '+') {
      sum++;
    } else {
      sum--;
    }
  }
  cout << sum << endl;
  return 0;
}
