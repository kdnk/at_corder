#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int a, b, t;
  cin >> a >> b >> t;

  int sum = 0;
  int time = 0;
  while (time <= t + 0.5) {
    time += a;
    if (time <= t + 0.5) {
      sum += b;
    }
  }
  cout << sum << endl;
  return 0;
}
