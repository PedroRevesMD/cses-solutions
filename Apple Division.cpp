#include <bits/stdc++.h>
#include <vector>
using namespace std;
typedef long long ll;

ll solve(int idx, vector<ll> &arr, ll sum1, ll sum2, int n) {
  if (idx == n) {
    return abs(sum1 - sum2);
  }

  ll c = solve(idx + 1, arr, sum1 + arr[idx], sum2, n);
  ll Nc = solve(idx + 1, arr, sum1, sum2 + arr[idx], n);

  return min(c, Nc);
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int x;
  cin >> x;
  vector<ll> y(x);
  for (int i = 0; i < x; i++)
    cin >> y[i];
  ll ans = solve(0, y, 0, 0, x);
  cout << ans << "\n";
}
