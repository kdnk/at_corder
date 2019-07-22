#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int r;
  cin >> r;

  if (r < 1200) {
    cout << "ABC" << endl;
  } else if (r < 2800) {
    cout << "ARC" << endl;
  } else {
    cout << "AGC" << endl;
  }

  return 0;
}
