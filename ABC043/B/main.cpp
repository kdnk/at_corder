#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string input;
  cin >> input;

  string ans = "";
  rep(i, input.size()) {
    if (input.at(i) == '1') {
      ans.push_back('1');
    } else if (input.at(i) == '0') {
      ans.push_back('0');
    } else if (input.at(i) == 'B') {
      if (ans.size() > 0) {
        ans.pop_back();
      }
    }
  }
  cout << ans << endl;
  return 0;
}
