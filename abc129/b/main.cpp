#include <bits/stdc++.h>
using namespace std;
typedef signed long long ll;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int N;
  cin >> N;
  vector<int> W(N);
  rep(i, N) { cin >> W[i]; }

  int ans = 100 * 100;

  rep(t, N) {
    int s1 = 0;
    int s2 = 0;
    rep(i, N) {
      if (i <= t) {
        s1 += W[i];
      } else {
        s2 += W[i];
      }
    }
    int tmp = abs(s1 - s2);
    if (tmp < ans) {
      ans = tmp;
    }
  }

  cout << ans << endl;

  return 0;
}
