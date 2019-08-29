#include <bits/stdc++.h>
using namespace std;
typedef signed long long ll;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int N, X;
  cin >> N >> X;
  vector<int> L(N, 0);
  rep(i, N) { cin >> L[i]; }

  int count = 1;
  int d = 0;
  for (int i = 0; i < N; i++) {
    if (X < d + L[i]) {
      break;
    }
    d = d + L[i];
    count++;
  }
  cout << count << endl;
  return 0;
}
