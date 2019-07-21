#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n, k;
  string s;
  cin >> n >> k;
  cin >> s;

  rep(i, n) {
    if (i + 1 == k) {
      s.at(i) = tolower(s.at(i));
    }
  }
  cout << s << endl;

  return 0;
}
