#include <bitset>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  int cnt = 0;

  for (int bit = 0; bit < (1 << n); ++bit) {
    vector<int> S;
    for (int i = 0; i < n; i++) {
      if (bit & (1 << i)) {
        S.push_back(i);
      }
    }
    int sum;
    for (int i = 0; i < S.size(); ++i) {
      sum += s[i];
    }

    if () }
}
