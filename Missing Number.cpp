#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll x, y;
  cin >> x;
  ll total = (x * (x + 1)) / 2;
  ll sum = 0;

  for (int i = 0; i < x - 1; i++) {
    cin >> y;
    sum += y;
  }

  cout << total - sum << "\n";

  return 0;
}
