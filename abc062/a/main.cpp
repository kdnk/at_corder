#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int x, y;
  cin >> x >> y;
  vector<int> a = {1, 3, 5, 7, 8, 10, 12};
  vector<int> b = {4, 6, 9, 11};
  vector<int> c = {2};

  if (find(a.begin(), a.end(), x) != a.end() &&
      find(a.begin(), a.end(), y) != a.end()) {
    cout << "Yes" << endl;
  } else if (find(b.begin(), b.end(), x) != b.end() &&
             find(b.begin(), b.end(), y) != b.end()) {
    cout << "Yes" << endl;
  } else if (find(c.begin(), c.end(), x) != c.end() &&
             find(c.begin(), c.end(), y) != c.end()) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}
