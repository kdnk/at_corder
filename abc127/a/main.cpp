#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int a, b;
  cin >> a >> b;

  if (13 <= a) {
    cout << b << endl;
  } else if (6 <= a && a < 13) {
    cout << b / 2 << endl;
  } else {
    cout << 0 << endl;
  }

  return 0;
}
