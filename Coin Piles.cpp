#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  ll x;
  cin >> x;

  while (x--) {
    ll a, b;
    cin >> a >> b;

    if (max(a, b) > 2 * min(a, b)) {
      cout << "NO" << "\n";
      continue;
    }

    if ((a + b) % 3 == 0) {
      cout << "YES" << "\n";
    } else {
      cout << "NO" << "\n";
    }
  }
}
