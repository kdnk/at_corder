#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int ab, bc, ca;
  cin >> ab >> bc >> ca;
  int ans = 1;
  int maximum = max(ab, max(bc, ca));

  if (ab != maximum) {
    ans *= ab;
  }
  if (bc != maximum) {
    ans *= bc;
  }
  if (ca != maximum) {
    ans *= ca;
  }
  cout << ans / 2 << endl;

  return 0;
}
