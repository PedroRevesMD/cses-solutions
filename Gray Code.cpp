#include <bits/stdc++.h>
#include <bitset>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int x;
  cin >> x;

  for (int i = 0; i < (1 << x); i++) {
    int val = (i ^ (i >> 1));
    bitset<32> set(val);
    string s = set.to_string();
    cout << s.substr(32 - x) << "\n";
  }
}
