#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int age;
  cin >> age;

  if (age == 1) {
    cout << "Hello World" << endl;
  } else {
    int a, b;
    cin >> a >> b;
    cout << a + b << endl;
  }

  return 0;
}
