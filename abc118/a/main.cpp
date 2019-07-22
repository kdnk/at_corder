#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int a, b;
  cin >> a >> b;
  int ans;

  if (b % a == 0) {
    ans = a + b;
  } else {
    ans = b - a;
  }

  cout << ans << endl;
  return 0;
}
