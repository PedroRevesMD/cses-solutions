#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define sp " "

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int x;
  cin >> x;
  for (int i = 0; i < x; i++) {
    for (int j = 0; j < x; j++) {
      cout << (i ^ j) << sp;
    }
    cout << nl;
  }
}
