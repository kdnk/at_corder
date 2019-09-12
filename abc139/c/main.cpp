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

  vector<ll> diff(n - 1);
  rep(i, n - 1) { diff[i] = h[i + 1] - h[i]; }

  int max_cnt = 0;
  int cnt = 0;
  rep(i, n - 1) {
    if (diff[i] <= 0) {
      cnt++;
      if (max_cnt < cnt) {
        max_cnt = cnt;
      }
    } else {
      cnt = 0;
    }
  }

  cout << max_cnt << endl;
  return 0;
}
