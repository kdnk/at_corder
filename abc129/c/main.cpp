#include <bits/stdc++.h>
using namespace std;
typedef signed long long ll;
const int MOD = 1000000007;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, m;
  cin >> n >> m;
  vector<bool> issafe(n + 1, true);

  rep(i, m) {
    int a;
    cin >> a;
    issafe[a] = false;
  }

  vector<int> dp(n + 1, 0);

  dp[0] = 1;
  if (issafe[1]) dp[1] = 1;

  for (int i = 2; i <= n; n++) {
    if (issafe[i - 1]) dp[i] += dp[i - 1];
    if (issafe[i - 2]) dp[i] += dp[i - 2];

    dp[i] %= MOD;
  }
  cout << dp[n] << endl;
  return 0;
}
