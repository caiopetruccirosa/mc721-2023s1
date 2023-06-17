#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pii pair<int,int>
#define pipii pair<int,pii>

using namespace std;

vector<int> dijkstra(vector<vector<pii>> &G, int c, int start) {
    vector<pii> distance(G.size()+1, pii(INT_MAX, INT_MAX));
    vector<bool> visited(G.size()+1, false);
    priority_queue<pipii, vector<pipii>, greater<pipii>> pq;

    distance[start] = 0;
    pq.push(pipii(0, pii(0, start)));

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
    int n, m;
    cin >> n >> m;

    vector<vector<pii>> G(n+1);
    for (int i = 0; i < m; i++) {
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

    return 0;
}