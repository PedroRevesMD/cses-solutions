#include <bits/stdc++.h>
#include <cmath>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int x;
  cin >> x;

  while (x--) {
    ll a, b;
    cin >> a >> b;

    if (b > a) {
      ll ans = (b - 1) * (b - 1);
      ll add = 0;

      if (b % 2 == 0) {
        add = a;
      } else {
        add = 2 * b - a;
      }
      cout << ans + add << "\n";

    } else {
      ll ans = (a - 1) * (a - 1);
      ll add = 0;

      if (a % 2 != 0) {
        add = b;
      } else {
        add = 2 * a - b;
      }
      cout << ans + add << "\n";
    }
  }
}
