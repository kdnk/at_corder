#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  string x, y;
  cin >> x >> y;
  if (x < y) {
    cout << '<' << endl;
  } else if (x == y) {
    cout << "=" << endl;
  } else {
    cout << ">" << endl;
  }

  return 0;
}
