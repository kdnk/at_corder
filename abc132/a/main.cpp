#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string s;
  cin >> s;
  set<char> chars;
  map<char, int> mp;
  rep(i, 4) {
    chars.insert(s.at(i));
    mp[s.at(i)]++;
  }

  for (char c : chars) {
    if (mp[c] != 2) {
      cout << "No" << endl;
      return 0;
    }
  }
  if (chars.size() != 2) {
    cout << "No" << endl;
    return 0;
  }

  cout << "Yes" << endl;
  return 0;
}
