#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int d;
  cin >> d;

  if (d == 25) {
    cout << "Christmas" << endl;
  }
  if (d == 24) {
    cout << "Christmas Eve" << endl;
  }
  if (d == 23) {
    cout << "Christmas Eve Eve" << endl;
  }
  if (d == 22) {
    cout << "Christmas Eve Eve Eve" << endl;
  }

  return 0;
}
