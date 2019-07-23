#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  if (n % 2 == 0) {
    cout << n << endl;
  } else {
    cout << n * 2 << endl;
  }
  return 0;
}
