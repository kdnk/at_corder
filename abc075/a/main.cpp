#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int a, b, c;
  cin >> a >> b >> c;
  if (a == b) {
    cout << c << endl;
  } else if (b == c) {
    cout << a << endl;
  } else if (c == a) {
    cout << b << endl;
  }
  return 0;
}
