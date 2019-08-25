#include <bits/stdc++.h>
using namespace std;
typedef signed long long ll;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, d;
  cin >> n >> d;
  vector<vector<float>> vec(n, vector<float>(d));
  rep(i, n) {
    rep(j, d) { cin >> vec.at(i).at(j); }
  }

  int ans = 0;
  rep(i, n - 1) {
    for (int j = i + 1; j < n; j++) {
      float tmp = 0;

      rep(k, d) { tmp += pow(vec.at(i).at(k) - vec.at(j).at(k), 2.0); }
      tmp = sqrt(tmp);
      if (floor(tmp) == ceil(tmp)) {
        ans++;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
