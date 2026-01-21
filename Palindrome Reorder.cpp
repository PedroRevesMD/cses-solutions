#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int s[26] = {};

  string val;
  cin >> val;

  const int len = val.length();
  string ans(len, ' ');

  for (int i = 0; i < len; i++) {
    s[val[i] - 'A'] += 1;
  }

  int count = 0;
  for (int i = 0; i < 26; i++) {
    if (s[i] % 2 != 0) {
      count += 1;
    }
  }

  if (count > 1) {
    cout << "NO SOLUTION" << "\n";
    return 0;
  }

  int l = 0, r = len - 1;

  for (int i = 0; i < len; i++) {
    if (s[val[i] - 'A'] % 2 == 1) {
      ans[len / 2] = val[i];
      s[val[i] - 'A'] -= 1;
    }

    while (s[val[i] - 'A'] > 0) {
      ans[l++] = ans[r--] = val[i];
      s[val[i] - 'A'] -= 2;
    }
  }
  cout << ans << "\n";
}
