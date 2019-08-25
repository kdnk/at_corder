#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;
  vector<int> seq(n);
  rep(i, n) { cin >> seq.at(i); }

  vector<int> sorted = seq;
  sort(seq.begin(), seq.end());

  int cnt_diff = 0;
  rep(i, n) {
    if (sorted.at(i) != seq.at(i)) {
      cnt_diff++;
    }
  }

  if (cnt_diff <= 2) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}
