#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int k;
  cin >> k;

  if (k % 2 == 0) {
    cout << (k / 2) * (k / 2) << endl;
  } else {
    cout << (k / 2 + 1) * (k / 2) << endl;
  }

  return 0;
}
