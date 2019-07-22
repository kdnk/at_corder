#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int a, b, c, d, e, k;
  cin >> a >> b >> c >> d >> e >> k;
  int sum = 0;

  if (b - a <= k) {
    sum++;
  }
  if (c - a <= k) {
    sum++;
  }
  if (d - a <= k) {
    sum++;
  }
  if (e - a <= k) {
    sum++;
  }

  if (c - b <= k) {
    sum++;
  }
  if (d - b <= k) {
    sum++;
  }
  if (e - b <= k) {
    sum++;
  }

  if (d - c <= k) {
    sum++;
  }
  if (e - c <= k) {
    sum++;
  }

  if (e - d <= k) {
    sum++;
  }

  if (sum == 10) {
    cout << "Yay!" << endl;
  } else {
    cout << ":(" << endl;
  }

  return 0;
}
