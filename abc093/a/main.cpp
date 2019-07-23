#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  string s;
  cin >> s;

  int a = 0;
  int b = 0;
  int c = 0;

  rep(i, 3) {
    if (s.at(i) == 'a') {
      a = 1;
    } else if (s.at(i) == 'b') {
      b = 1;
    } else if (s.at(i) == 'c') {
      c = 1;
    }
  }
  if (a * b * c == 1) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}
