#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  string a, b, c;
  cin >> a >> b >> c;

  cout << (char)toupper(a.at(0));
  cout << (char)toupper(b.at(0));
  cout << (char)toupper(c.at(0)) << endl;
  return 0;
}
