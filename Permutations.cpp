#include <bits/stdc++.h>
#include <cmath>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int x;
  cin >> x;

  if (x == 2 || x == 3) {
    cout << "NO SOLUTION" << "\n";
    return 0;
  }

  for (int i = 2; i <= x; i = i + 2) {
    cout << i << " ";
  }

  for (int i = 1; i <= x; i = i + 2) {
    cout << i << " ";
  }

  cout << "\n";
}
