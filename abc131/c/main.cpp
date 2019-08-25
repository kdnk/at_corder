#include <bits/stdc++.h>
using namespace std;
typedef signed long long ll;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

ll gcd(ll a, ll b) {
  if (b == 0) return a;
  return gcd(b, a % b);
}

ll lcm(ll a, ll b) { return a * b / gcd(a, b); }

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  ll a, b, c, d;
  cin >> a >> b >> c >> d;

  ll cnt_deleted = (b / d - (a - 1) / d) + (b / c - (a - 1) / c) -
                   (b / lcm(c, d) - (a - 1) / lcm(c, d));
  cout << (b - a + 1) - cnt_deleted << endl;

  return 0;
}
