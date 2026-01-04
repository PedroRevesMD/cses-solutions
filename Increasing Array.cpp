#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int x, mx = 0;
  ll ans = 0;
  cin >> x;
  for (int i = 0; i < x; ++i) {
    int y;
    cin >> y;
    mx = max(y, mx);
    ans += mx - y;
  }

  cout << ans << "\n";

  return 0;
}
