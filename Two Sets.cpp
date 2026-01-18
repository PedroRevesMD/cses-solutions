#include <bits/stdc++.h>
#include <cmath>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  ll x;
  cin >> x;

  ll sum = x * (x + 1) / 2;

  if (sum % 2 != 0) {
    cout << "NO" << "\n";
  } else {
    cout << "YES" << "\n";

    vector<ll> vis1, vis2;
    vector<ll> vis(x + 1, 0);

    ll s1_sum = 0;
    ll max_element = x;

    while (s1_sum < sum / 2) {

      ll remaining = sum / 2 - s1_sum;

      if (remaining > max_element) {
        vis1.push_back(max_element);
        vis[max_element] = 1;
        s1_sum += max_element;
        max_element--;
      } else {
        vis1.push_back(remaining);
        vis[remaining] = 1;
        s1_sum = sum / 2;
      }
    }

    for (int i = 1; i <= x; i++) {
      if (vis[i] == 0) {
        vis2.push_back(i);
      }
    }

    cout << vis1.size() << "\n";
    for (auto y : vis1) {
      cout << y << " ";
    }

    cout << "\n";

    cout << vis2.size() << "\n";

    for (auto z : vis2) {
      cout << z << " ";
    }
  }
}
