#include <bits/stdc++.h>
#include <cmath>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  ll x, s = 1;
  cin >> x;
  for (int i = 0; i < x; ++i) {
    s = 2 * s % ((int)1e9 + 7);
  }

  cout << s << "\n";
}
