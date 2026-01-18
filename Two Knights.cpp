#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll x;
  cin >> x;

  for (ll i = 1; i <= x; i++) {
    ll t = i * i * (i * i - 1) / 2;
    ll att = 4 * (i - 1) * (i - 2);
    cout << t - att << "\n";
  }
  return 0;
}
