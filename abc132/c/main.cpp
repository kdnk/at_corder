#include <bits/stdc++.h>
using namespace std;
typedef signed long long ll;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;
  vector<int> vec(n);
  rep(i, n) { cin >> vec.at(i); }

  sort(vec.begin(), vec.end());
  int mid_first = vec.at(n / 2 - 1);
  int mid_second = vec.at(n / 2);

  if (mid_first == mid_second) {
    cout << 0 << endl;
  } else {
    cout << mid_second - mid_first << endl;
  }

  return 0;
}
