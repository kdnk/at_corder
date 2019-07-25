#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int x, a, b;
  cin >> x >> a >> b;

  if (b <= a) {
    cout << "delicious" << endl;
  } else if (b <= a + x) {
    cout << "safe" << endl;
  } else {
    cout << "dangerous" << endl;
  }

  return 0;
}
