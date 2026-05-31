#include <bits/stdc++.h>
using namespace std;

void solve() {
    int h, w;
    cin >> h >> w;

    vector<string> grid(h);
    for (int i = 0; i < h; i++) cin >> grid[i];

    int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

    queue<pair<int, int>> q;
    vector<vector<int>> dist(h, vector<int>(w, -1));

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (grid[i][j] == '#') {
                bool boundary = false;

                for (int k = 0; k < 8; k++) {
                    int ni = i + dx[k];
                    int nj = j + dy[k];

                    if (ni < 0 || ni >= h || nj < 0 || nj >= w) continue;

                    if (grid[ni][nj] == '.') {
                        boundary = true;
                    }
                }

                if (boundary) {
                    dist[i][j] = 0;
                    q.push(make_pair(i, j));
                }
            }
        }
    }

    while (!q.empty()) {
        pair<int, int> p = q.front();
        q.pop();

        int x = p.first;
        int y = p.second;

        for (int k = 0; k < 8; k++) {
            int nx = x + dx[k];
            int ny = y + dy[k];

            if (nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
            if (dist[nx][ny] != -1) continue;

            dist[nx][ny] = dist[x][y] + 1;
            q.push(make_pair(nx, ny));
        }
    }

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (dist[i][j] != -1 && dist[i][j] % 2 == 0) {
                cout << '#';
            } else {
                cout << '.';
            }
        }
        cout << "\n";
    }
}

int main() {
    solve();
}