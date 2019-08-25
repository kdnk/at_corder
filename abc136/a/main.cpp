#include <bits/stdc++.h>
using namespace std;
typedef signed long long ll;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int a, b, c;
  cin >> a >> b >> c;

  if (b + c > a) {
    cout << b + c - a << endl;
  } else {
    cout << 0 << endl;
  }

  return 0;
}
