#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n, l;
  cin >> n >> l;

  vector<string> words(n);
  rep(i, n) { cin >> words.at(i); }
  sort(words.begin(), words.end());
  for (string w : words) {
    cout << w;
  }
  cout << endl;
}
