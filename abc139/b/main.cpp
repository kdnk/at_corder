#include <bits/stdc++.h>
using namespace std;
typedef signed long long ll;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int a, b;
  cin >> a >> b;

  int current = 1;
  int count = 0;

  rep(i, 20) {
    if (current >= b) {
      cout << count << endl;
      break;
    } else {
      current += a - 1;
      count++;
    }
  }

  return 0;
}
