#include <bits/stdc++.h>
#include <cmath>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  ll x, count = 0;
  cin >> x;

  if (x < 0) {
    return -1;
  }

  for (int i = 5; x / i >= 1; i *= 5) {
    count += x / i;
  }

  cout << count << "\n";
}
