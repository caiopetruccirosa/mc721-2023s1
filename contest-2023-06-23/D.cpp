#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pii pair<int,int>
#define pipii pair<int,pii>

using namespace std;

vector<vector<pii>> prim_mst(vector<vector<pii>> &G) {
    vector<vector<pii>> mst(G.size(), vector<pii>());
    vector<bool> taken(G.size(), false);

    priority_queue<pipii, vector<pipii>, greater<pipii>> pq;
    taken[1] = true;
    for (pii neigh: G[1])
        if (!taken[neigh.second])
            pq.push(pipii(neigh.first, make_pair(neigh.second, 1)));

    int edges = 0;
    int V = G.size()-1;
    while (!pq.empty() && edges < V-1) {
        pipii e = pq.top();
        pq.pop();
        int w = e.first, u = e.second.first, v = e.second.second;
        if (!taken[v]) {
            taken[v] = true;
            mst[u].push_back(pii(w, v));
            mst[v].push_back(pii(w, u));
            for (pii neigh: G[v])
                if (!taken[neigh.second])
                    pq.push(pipii(neigh.first, make_pair(neigh.second, v)));
            edges++;
        }
    }

    return mst;
}

int max_weight_in_path(vector<vector<pii>> &G, int start, int end) {
    vector<bool> visited(G.size(), false);
    vector<pii> prev(G.size(), pii(0, 0));
    queue<int> q;

    visited[start] = true;
    q.push(start);

    bool ended = false;
    while (!q.empty() && !ended) {
        int v = q.front();
        q.pop();
        for (pii neigh : G[v]) {
            if (!visited[neigh.second]) {
                prev[neigh.second] = pii(neigh.first, v);
                visited[neigh.second] = true;
                q.push(neigh.second);
                if (neigh.second == end)
                    ended = true;
            }
        }
    }

    int max_weight = 0;
    int current = end;
    while (current != start) {
        max_weight = max(max_weight, prev[current].first);
        current = prev[current].second;
    }

    return max_weight;
}

int main() {_
    int C, S, Q;
    while (cin >> C >> S >> Q && C != 0 && S != 0 && Q != 0) {
        vector<vector<pii>> G(C+1, vector<pii>());
        for (int i = 0; i < S; i++) {
            int c1, c2, d;
            cin >> c1 >> c2 >> d;
            G[c1].push_back(pii(d, c2));
            G[c2].push_back(pii(d, c1));
        }

        vector<vector<pii>> mst = prim_mst(G);
        for (int i = 0; i < Q; i++) {
            
        }
    }

    return 0;
}