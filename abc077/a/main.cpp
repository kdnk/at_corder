#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  string c1, c2;
  cin >> c1 >> c2;

  if (c1.at(0) == c2.at(2) && c1.at(1) == c2.at(1) && c1.at(2) == c2.at(0)) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}
