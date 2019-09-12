#include <bits/stdc++.h>
using namespace std;
typedef signed long long ll;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<ll> h(n);
  rep(i, n) { cin >> h[i]; }

  int global_cnt = 0;
  for (int i = 0; i < n; i++) {
    int cnt = 0;

    for (int j = i + 1; j < n; j++) {
      if (h[j - 1] >= h[j]) {
        cnt++;
      } else {
        break;
      }
    }
    if (global_cnt < cnt) {
      global_cnt = cnt;
    }
  }

  cout << global_cnt << endl;

  return 0;
}
