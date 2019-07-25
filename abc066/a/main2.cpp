#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // vector<int> n;
  int a, b, c;
  cin >> a >> b >> c;
  cout << min(a + b, min(b + c, c + a)) << endl;
  return 0;
}
