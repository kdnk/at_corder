#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, k;
  cin >> n >> k;

  if (n % k == 0) {
    cout << 0 << endl;
  } else {
    cout << 1 << endl;
  }

  return 0;
}
