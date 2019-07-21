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

  int g_first = 0;
  int g_first_index = -1;
  int g_second = 0;
  int g_second_index = -1;

  rep(i, n) {
    int max = 0;
    if (i != g_first_index && 0 < g_first_index) {
      max = nums.at(g_first_index);
    } else {
      rep(j, n) {
        if (i == g_first_index && g_second_index > 0) {
          max = g_second;
        } else {
          if (i != j) {
            if (max < nums.at(j)) {
              max = nums.at(j);
              if (g_first < max) {
                g_first_index = j;
                g_first = max;
              }
            }
            if (g_second < nums.at(j) && nums.at(j) < max) {
              g_second = nums.at(j);
              g_second_index = j;
            }
          }
        }
      }
    }
    cout << max << endl;
  }
  return 0;
}
