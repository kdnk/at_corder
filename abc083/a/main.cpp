#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int left = a + b;
  int right = c + d;
  if (left > right) {
    cout << "Left" << endl;
  } else if (left == right) {
    cout << "Balanced" << endl;
  } else {
    cout << "Right" << endl;
  }
  return 0;
}
