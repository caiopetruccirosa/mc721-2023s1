#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pii pair<int,int>

using namespace std;

vector<int> bfs(vector<vector<int>> &G, int start) {
    vector<bool> visited(G.size(), false);
    vector<int> distance(G.size(), INT_MAX);
    queue<int> q;

    distance[start] = 0;
    visited[start] = true;
    q.push(start);

    while (!q.empty()) {
        int v = q.front();
        q.pop();
        for (int neighbour : G[v]) {
            if (!visited[neighbour]) {
                distance[neighbour] = distance[v]+1;
                visited[neighbour] = true;
                q.push(neighbour);
            }
        }
    }

    return distance;
}

int main() {_
    int t = 1, T;
    cin >> T;

    while (t <= T) {
        int n, r;
        cin >> n >> r;

        vector<vector<int>> G(n, vector<int>());
        for (int i = 0; i < r; i++) {
            int u, v;
            cin >> u >> v;
            G[u].push_back(v);
            G[v].push_back(u);
        }

        int s, d;
        cin >> s >> d;

        int minimum_time = 0;
        vector<int> pre_plant = bfs(G, s), pos_plant = bfs(G, d);
        for (int i = 0; i < n; i++) {
            minimum_time = max(minimum_time, pre_plant[i]+pos_plant[i]);
        }
        cout << "Case " << t << ": " << minimum_time << '\n';
        t++;
    }

    return 0;
}