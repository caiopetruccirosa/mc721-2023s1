#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pii pair<int,int>

using namespace std;

int bfs(vector<pii> right_doors, vector<pii> top_doors, pii start, pii end, int n) {
    vector<vector<bool>> visited(n+1, vector<bool>(n+1, false));
    vector<vector<int>> distance(n+1, vector<int>(n+1, 100));
    queue<pii> q;

    distance[start.first][start.second] = 0;
    visited[start.first][start.second] = true;
    q.push(start);

    int finished = false;
    while (!q.empty() && !finished) {
        pii cell = q.front();
        q.pop();
        int layer = max(cell.first, cell.second);
        vector<pii> adjacent;
        if (cell.first == layer) {
            if (cell.second > 1)
                adjacent.push_back(pii(cell.first, cell.second-1));
            if (cell.second < layer)
                adjacent.push_back(pii(cell.first, cell.second+1));
            if (right_doors[layer].second == cell.second)
                adjacent.push_back(pii(cell.first+1, cell.second));
            if (layer > 1 && right_doors[layer-1].second == cell.second)
                adjacent.push_back(pii(cell.first-1, cell.second));
        }
        if (cell.second == layer) {
            if (cell.first > 1)
                adjacent.push_back(pii(cell.first-1, cell.second));
            if (cell.first < layer)
                adjacent.push_back(pii(cell.first+1, cell.second));
            if (top_doors[layer].first == cell.first)
                adjacent.push_back(pii(cell.first, cell.second+1));
            if (layer > 1 && top_doors[layer-1].first == cell.first)
                adjacent.push_back(pii(cell.first, cell.second-1));
        }
        for (pii adj: adjacent) {
            if (!visited[adj.first][adj.second]) {
                visited[adj.first][adj.second] = true;
                distance[adj.first][adj.second] = distance[cell.first][cell.second]+1;
                q.push(adj);
                if ((adj.first == end.first) && (adj.second == end.second)) {
                    finished = true;
                }
            }
        }
    }

    return distance[end.first][end.second];
}

int main() {_
    int n;
    cin >> n;

    vector<pii> right_doors(n), top_doors(n);
    for (int i = 1; i < n; i++) {
        int dx1, dy1, dx2, dy2;
        cin >> dx1 >> dy1 >> dx2 >> dy2;
        right_doors[i] = pii(dx1, dy1);
        top_doors[i] = pii(dx2, dy2);
    }

    int m;
    cin >> m;
    for (int i = 1; i <= m; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        cout << bfs(right_doors, top_doors, pii(x1, y1), pii(x2, y2), n) << '\n';
    }

    return 0;
}