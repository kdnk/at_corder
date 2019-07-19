#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string code;
  cin >> code;

  char prev_digit;
  for (char digit : code) {
    if (prev_digit == digit) {
      cout << "Bad" << endl;
      return 0;
    }
    prev_digit = digit;
  }
  cout << "Good" << endl;
}
