#include <bitset>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n = 3;
  for (int bit = 0; bit < (1 << n); ++bit) {
    // cout << (1 << n) << endl;
    // cout << bitset<4>(1 << n) << endl;
    // cout << "bit: " << bit << endl;
    vector<int> S;
    for (int i = 0; i < n; ++i) {
      if (bit & (1 << i)) {
        S.push_back(i);
      }
    }

    cout << bit << ": { ";
    for (int i = 0; i < (int)S.size(); ++i) {
      cout << S[i] << " ";
    }
    cout << "}" << endl;
  }
}
