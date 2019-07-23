#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int a, b;
  cin >> a >> b;

  if (8 < a || 8 < b) {
    cout << ":(" << endl;
  } else {
    cout << "Yay!" << endl;
  }

  return 0;
}
