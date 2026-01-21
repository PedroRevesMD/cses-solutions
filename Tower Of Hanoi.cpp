#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void numbers_toh(int a, int from, int to, int with) {
  if (a == 0) {
    return;
  }

  numbers_toh(a - 1, from, with, to);
  cout << from << " " << to << "\n";
  numbers_toh(a - 1, with, to, from);
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int x;
  cin >> x;

  cout << pow(2, x) - 1 << "\n";

  numbers_toh(x, 1, 3, 2);
}
