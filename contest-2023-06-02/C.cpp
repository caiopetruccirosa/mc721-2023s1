#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pii pair<int,int>
#define pipii pair<int,pii>

using namespace std;

int dijkstra(vector<vector<pii>> &G, vector<int> &p, int c, int s, int e) {
    vector<vector<int>> cost(G.size(), vector<int>(c+1, INT_MAX));
    vector<vector<bool>> visited(G.size(), vector<bool>(c+1, false));
    priority_queue<pipii, vector<pipii>, greater<pipii>> pq;

    cost[s][0] = 0;
    pq.push(pipii(0, pii(0, s)));

    while (!pq.empty()) {
        pipii v = pq.top();
        pq.pop();

        int current_cost = v.first;
        int fuel = v.second.first;
        int city = v.second.second;

        if (!visited[city][fuel]) {
            visited[city][fuel] = true;

            for (pii neighbour : G[city]) {
                int nei_distance = neighbour.first;
                int nei_city = neighbour.second;
                if (nei_distance <= fuel && 
                    !visited[nei_city][fuel-nei_distance] &&
                    cost[nei_city][fuel-nei_distance] > current_cost) {
                    cost[nei_city][fuel-nei_distance] = current_cost;
                    pq.push(pipii(current_cost, pii(fuel - nei_distance, nei_city)));
                }
            }

            if (fuel+1 <= c && 
                !visited[city][fuel+1] &&
                cost[city][fuel+1] > current_cost+p[city]) {
                cost[city][fuel+1] = current_cost + p[city];
                pq.push(pipii(current_cost + p[city], pii(fuel + 1, city)));
            }
        }
    }

    return cost[e][0];
}

int main() {_
    int n, m;
    cin >> n >> m;

    vector<int> p(n);
    for (int i = 0; i < n; i++)
        cin >> p[i];

    vector<vector<pii>> G(n);
    for (int i = 0; i < m; i++) {
        int a, b, w;
        cin >> a >> b >> w;
        G[a].push_back(pii(w, b));
        G[b].push_back(pii(w, a));
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int c, s, e;
        cin >> c >> s >> e;
        int cost = dijkstra(G, p, c, s, e);
        if (cost < INT_MAX)
            cout << cost << '\n';
        else
            cout << "impossible\n";
    }

    return 0;
}