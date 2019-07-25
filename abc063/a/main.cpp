#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int a, b;
  cin >> a >> b;
  if (10 <= (a + b)) {
    cout << "error" << endl;
  } else {
    cout << a + b << endl;
  }
  return 0;
}
