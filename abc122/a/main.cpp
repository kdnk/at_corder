#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  char b;
  cin >> b;

  char ans;

  if (b == 'A') {
    ans = 'T';
  } else if (b == 'T') {
    ans = 'A';
  } else if (b == 'C') {
    ans = 'G';
  } else if (b == 'G') {
    ans = 'C';
  }
  cout << ans << endl;
  return 0;
}
