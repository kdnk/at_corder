#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int H, W;
  int h, w;

  cin >> H >> W;
  cin >> h >> w;

  cout << H * W - (h * W + w * H - h * w) << endl;

  return 0;
}
