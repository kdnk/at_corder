#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int a, b, num;
  cin >> a >> b;
  num = a + b;
  if (num < 10) {
    cout << num << endl;
  } else {
    cout << "error" << endl;
  }
  return 0;
}
