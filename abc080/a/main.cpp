#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, a, b;

  cin >> n >> a >> b;
  cout << min(b, (a * n)) << endl;
  return 0;
}
