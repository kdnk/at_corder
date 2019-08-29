#include <bits/stdc++.h>
using namespace std;
typedef signed long long ll;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int N, M;
  cin >> N >> M;
  vector<vector<int>> vec(M, vector<int>(N, 0));
  rep(k, M) {
    rep(j, k) {
      int _s;
      cin >> _s;
      vec[k][j] = _s;
    }
  }
  vector<int> p(M);
  rep(i, M) {
    int _p;
    cin >> _p;
    p[i] = _p;
  }

  return 0;
}
