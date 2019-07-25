#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int x, a, b;
  cin >> x >> a >> b;
  if (abs(x - a) > abs(x - b)) {
    cout << 'B' << endl;
  } else {
    cout << 'A' << endl;
  }
  return 0;
}
