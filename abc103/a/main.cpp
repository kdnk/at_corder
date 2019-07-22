#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int a_1, a_2, a_3;
  cin >> a_1 >> a_2 >> a_3;
  int maximum = max(a_1, max(a_2, a_3));
  int minimum = min(a_1, min(a_2, a_3));
  cout << maximum - minimum << endl;

  return 0;
}
