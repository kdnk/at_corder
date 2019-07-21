#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int a, p;
  cin >> a >> p;

  int apple_piece = a * 3;
  int pie = (apple_piece + p) / 2;

  cout << pie << endl;

  return 0;
}
