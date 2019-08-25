#include <bits/stdc++.h>
using namespace std;
typedef signed long long ll;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int a, b;
  cin >> a >> b;

  int ans = a + b;
  if (23 < ans) {
    ans = ans - 24;
  }
  cout << ans << endl;
  return 0;
}
