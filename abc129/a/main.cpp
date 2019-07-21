#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int facc(int n) {
  int sum = 1;
  rep(i, n) { sum *= i; }
  return sum;
}

int main() {
  int p, q, r;
  cin >> p >> q >> r;

  int a = p + q;
  int b = q + r;
  int c = r + p;

  cout << min(a, min(b, c)) << endl;
  return 0;
}
