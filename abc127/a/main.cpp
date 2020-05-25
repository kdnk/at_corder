// N 枚の ID カードと
// M 個のゲートがあります。

// i 番目のゲートは
// Li, Li+1, ..., Ri番目の ID カードのうちどれか
// 1枚を持っていれば通過できます。

// 1枚だけで全てのゲートを通過できる ID カードは何枚あるでしょうか。
// 1 ≤ Li ≤ Ri ≤ N

#include <bits/stdc++.h>
using namespace std;
typedef signed long long ll;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int N, M;
  cin >> N >> M;
  vector<int> L(M);
  vector<int> R(M);

  rep(i, M) { cin >> L[i] >> R[i]; }

  return 0;
}
