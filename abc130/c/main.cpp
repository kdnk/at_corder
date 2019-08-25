#include <bits/stdc++.h>
using namespace std;
typedef signed long long ll;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  ll W, H, x, y;
  cin >> W >> H >> x >> y;

  ll area = W * H;
  cout << fixed << setprecision(6) << (double)(area / 2.0) << " ";

  if (x == W / 2.0 && y == H / 2.0) {
    cout << 1 << endl;
  } else {
    cout << 0 << endl;
  }

  return 0;
}
