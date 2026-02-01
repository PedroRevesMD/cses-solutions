#include <bits/stdc++.h>
#include <queue>
using namespace std;
typedef long long ll;
#define el "\n";
#define sp " ";
#define vi vector<int>
#define vvi vector<vector<int>>
#define vii vector<pair<int, int>>
#define pii pair<int, int>
#define len(x) int((x).size())

vii offsets = {{2, 1}, {2, -1}, {-2, 1}, {-2, -1},
               {1, 2}, {-1, 2}, {1, -2}, {-1, -2}};
bool isValid(int i, int j, int n) { return i >= 0 && i < n && j >= 0 && j < n; }

void bfs(vvi &grid, pii start) {
  int n = len(grid);
  queue<pii> q;
  q.push(start);
  int u = start.first;
  int v = start.second;
  grid[u][v] = 0;

  while (!q.empty()) {
    u = q.front().first;
    v = q.front().second;
    q.pop();

    for (auto p : offsets) {
      int i = u + p.first;
      int j = v + p.second;

      if (isValid(i, j, n) && grid[i][j] == -1) {
        grid[i][j] = grid[u][v] + 1;
        q.push({i, j});
      }
    }
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int x;
  cin >> x;
  vvi grid(x, vi(x, -1));
  bfs(grid, {0, 0});

  for (int i = 0; i < x; i++) {
    for (int j = 0; j < x; j++) {
      cout << grid[i][j] << sp;
    }
    cout << el;
  }
}
