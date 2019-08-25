#include <bits/stdc++.h>
using namespace std;
typedef signed long long ll;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  char a, b;
  cin >> a >> b;

  if (a == 'H') {
    if (b == 'H') {
      cout << "H" << endl;
    } else {
      cout << "D" << endl;
    }
  } else {
    if (b == 'H') {
      cout << "D" << endl;
    } else {
      cout << "H" << endl;
    }
  }

  return 0;
}
