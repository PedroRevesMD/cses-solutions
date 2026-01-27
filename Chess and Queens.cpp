#include <bits/stdc++.h>
#include <cmath>
using namespace std;
typedef long long ll;

void solution(vector<string> &board, int row, vector<bool> &oc,
              vector<bool> &op, vector<bool> &os, int &ans) {
  if (row == 8) {
    ans += 1;
    return;
  }

  for (int i = 0; i < 8; i++) {
    if (board[row][i] == '*' || oc[i] || op[row - i + 8] || os[row + i]) {
      continue;
    }
    oc[i] = op[row - i + 8] = os[row + i] = true;
    solution(board, row + 1, oc, op, os, ans);
    oc[i] = op[row - i + 8] = os[row + i] = false;
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  vector<string> board;
  int ans = 0;
  for (int i = 0; i < 8; i++) {
    string a;
    cin >> a;
    board.push_back(a);
  }

  vector<bool> oc(10, false), op(20, false), os(20, false);
  solution(board, 0, oc, op, os, ans);
  cout << ans << "\n";
}
