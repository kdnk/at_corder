#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int x, a, b;
  cin >> x >> a >> b;

  if (abs(x - a) < abs(x - b)) {
    cout << "A" << endl;
  } else {
    cout << "B" << endl;
  }

  return 0;
}
