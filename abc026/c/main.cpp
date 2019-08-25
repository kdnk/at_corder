#include <bits/stdc++.h>
using namespace std;
typedef signed long long ll;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  vector<int> b(n);
  vector<int> score(n, 1);
  rep(i, n - 1) { cin >> b.at(i); }

  for (int i = n - 1; i >= 0; i--) {
    int boss = b.at(i);
    score.at(boss) += score.at(i) + score.at(i) + 1;
  }

  return 0;
}
