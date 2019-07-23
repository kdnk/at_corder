#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  if (1 <= n && n < 1000) {
    cout << "ABC" << endl;
  } else {
    cout << "ABD" << endl;
  }

  return 0;
}
