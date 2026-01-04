#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string c;
  int curr = 1, ans = 0;
  cin >> c;

  for (size_t i = 1; i <= c.size(); ++i) {
    if (c[i] == c[i - 1]) {
      curr++;
    } else {
      curr = 1;
    }
    ans = max(curr, ans);
  }

  cout << ans << "\n";

  return 0;
}
