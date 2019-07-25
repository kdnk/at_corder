#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, a;
  cin >> n >> a;

  int rest = n;

  while (500 <= rest) {
    rest = rest - 500;
  }
  if (rest == 0) {
    cout << "Yes" << endl;
  } else if (0 < rest && rest <= a) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}
