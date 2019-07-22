#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  vector<int> nums(3);
  rep(i, 3) { cin >> nums.at(i); }

  sort(nums.begin(), nums.end());

  cout << nums.at(2) * 10 + nums.at(1) + nums.at(0) << endl;
}
