#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pii pair<int,int>

using namespace std;

vector<int> dijkstra(vector<vector<pii>> &G, vector<int> &distance, int start, int V) {
    vector<bool> visited(V+1, false);
    priority_queue<pii, vector<pii>, greater<pii>> pq;

    distance[start] = 0;
    pq.push(make_pair(0, start));

    while (!pq.empty()) {
        pii p = pq.top();
        pq.pop();

        if (visited[p.second])
            continue;

        visited[p.second] = true;

        for (auto adj : G[p.second]) {
            if (!visited[adj.second]) {
                int d = distance[p.second] + adj.first;
                if (d < distance[adj.second]) {
                    distance[adj.second] = d;
                    pq.push(make_pair(d, adj.second));
                }
            }
        }
    }

    return distance;
}

int main() {_
    int n, m, k;
    cin >> n >> m >> k;
    
    vector<vector<pii>> G(n+1, vector<pii>());
    vector<pii> E(m);
    for (int i = 0; i < m; i++) {
        int x, y, w;
        cin >> x >> y >> w;
        G[x].push_back(make_pair(w, y));
        G[y].push_back(make_pair(w, x));
        E[i] = make_pair(x, y);
    }

    vector<pii> routes(k);
    for (int i = 0; i < k; i++)
        cin >> routes[i].first >> routes[i].second;

    vector<vector<int>> distances(n+1, vector<int>(n+1, INT_MAX));
    for (int i = 1; i <= n; i++)
        distances[i] = dijkstra(G, distances[i], i, n);

    int min_sum = INT_MAX;
    for (int i = 0; i < m; i++) {
        int sum = 0;
        for (int j = 0; j < k; j++) {
            int a = routes[j].first;
            int b = routes[j].second;
            int x = E[i].first;
            int y = E[i].second;
            sum += min(distances[a][b], min(distances[a][x] + distances[y][b], distances[b][x] + distances[y][a]));
        }
        min_sum = min(min_sum, sum);
    }
    cout << min_sum << '\n';
    
    return 0;
}