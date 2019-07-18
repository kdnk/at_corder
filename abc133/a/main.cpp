#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n, a, b;
  cin >> n >> a >> b;

  int train = n * a;
  int tax = b;

  if (train > tax) {
    cout << tax << endl;
  } else {
    cout << train << endl;
  }
  return 0;
}
