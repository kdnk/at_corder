#include <bits/stdc++.h>
using namespace std;
typedef signed long long ll;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int N, M;
  cin >> N >> M;
  vector<vector<int>> s(M, vector<int>(N));

  for (int i = 0; i < M; i++) {
    int k;
    cin >> k;
    for (int j = 0; j < k; j++) {
      int a;
      cin >> a;
      s[i].push_back(a);
    }
  }

  vector<int> p(M);
  for (int i = 0; i < M; i++) {
    cin >> p[i];
  }

  ll res = 0;
  for (int bit = 0; bit < (1 << N); bit++) {
    bool ok = true;
    for (int i = 0; i < M; i++) {
      int con = 0;
      for (auto v : s[i]) {
        if (bit & (1 << v - 1)) {
          con++;
        }
      }
      if (con % 2 != p[i]) {
        ok = false;
      }
    }
    if (ok) {
      res++;
    }
  }

  cout << res << endl;
}
