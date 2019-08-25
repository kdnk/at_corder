#include <bits/stdc++.h>
using namespace std;
typedef signed long long ll;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, l;
  cin >> n >> l;

  vector<int> original_tastes(n);
  rep(i, n) {
    int taste = l + (i + 1) - 1;
    original_tastes.at(i) = taste;
  }
  auto abs_min =
      *min_element(original_tastes.begin(), original_tastes.end(),
                   [](const int& s1, int& s2) { return abs(s1) < abs(s2); });
  int ans = 0;
  rep(i, n) {
    if (original_tastes.at(i) == abs_min) {
      continue;
    }
    ans += original_tastes.at(i);
  }
  cout << ans << endl;
  return 0;
}
