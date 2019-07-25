#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int x, t;
  cin >> x >> t;

  if (x - t >= 0) {
    cout << x - t << endl;
  } else {
    cout << 0 << endl;
  }

  return 0;
}
