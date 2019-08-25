#include <bits/stdc++.h>
using namespace std;
typedef signed long long ll;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;
  vector<int> vec(n);
  rep(i, n) { cin >> vec.at(i); }

  int ans = 0;
  for (int i = 1; i <= n - 2; i++) {
    if ((vec.at(i - 1) < vec.at(i) && vec.at(i) < vec.at(i + 1)) ||
        (vec.at(i + 1) < vec.at(i) && vec.at(i) < vec.at(i - 1))) {
      ans++;
    }
  }
  cout << ans << endl;

  return 0;
}
