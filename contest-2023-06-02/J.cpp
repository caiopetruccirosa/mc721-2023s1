#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pii pair<int,int>

using namespace std;

vector<int> dijkstra(vector<vector<pii>> &G, int start) {
    vector<int> distance(G.size()+1, INT_MAX);
    vector<bool> visited(G.size()+1, false);
    priority_queue<pii, vector<pii>, greater<pii>> pq;

    distance[start] = 0;
    pq.push(make_pair(0, start));

    while (!pq.empty()) {
        pii p = pq.top();
        pq.pop();

        if (!visited[p.second]) {
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
    }

    return distance;
}

int main() {_
    int t;
    cin >> t;
    bool first = true;
    while (t--) {
        if (!first)
            cout << '\n';
        else
            first = false;
        
        int N, E, T, M;
        cin >> N >> E >> T >> M;

        vector<vector<pii>> G(N+1);
        for (int i = 0; i < M; i++) {
            int a, b, w;
            cin >> a >> b >> w;
            G[b].push_back(pii(w, a));
        }

        vector<int> distances = dijkstra(G, E);
        int mouse = 0;
        for (int d: distances)
            if (d <= T)
                mouse++;

        cout << mouse << '\n';
    }

    return 0;
}