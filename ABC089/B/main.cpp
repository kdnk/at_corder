#include <bits/stdc++.h>
using namespace std;

int main() {
  int P;
  int W;
  int G;
  int Y;

  int num;
  cin >> num;
  cin >> ;
  for (int i = 0; i < num; i++) {
    string color;
    if (color == "Y") {
      cout << "Four" << endl;
      return 0;
    }
    if (color == "P") {
      P = 1;
    }
    if (color == "W") {
      W = 1;
    }
    if (color == "G") {
      G = 1;
    }
  }
  if (P + W + G == 3) {
    cout << "Three" << endl;
    return 0;
  }
}
