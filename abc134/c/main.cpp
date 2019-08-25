#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;
  vector<int> nums(n);
  rep(i, n) { cin >> nums.at(i); }

  vector<int> sorted_nums(nums);
  sort(sorted_nums.begin(), sorted_nums.end(), greater<int>());

  rep(i, n) {
    if (nums.at(i) == sorted_nums.at(0)) {
      cout << sorted_nums.at(1) << endl;
    } else {
      cout << sorted_nums.at(0) << endl;
    }
  }

  return 0;
}
