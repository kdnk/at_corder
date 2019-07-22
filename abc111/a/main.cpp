#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  string n;
  cin >> n;

  rep(i, 3) {
    if (n.at(i) == '1') {
      n.at(i) = '9';
    } else if (n.at(i) == '9') {
      n.at(i) = '1';
    }
  }
  cout << n << endl;
  return 0;
}
