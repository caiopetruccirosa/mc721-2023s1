#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pii pair<int,int>
#define plli pair<ll,int>

using namespace std;

int main() {_
    int n, m;
    cin >> n >> m;

    vector<vector<plli>> adj(n+1, vector<plli>());
    vector<ll> vw(n+1), dw(n+1);
    vector<bool> removed(n+1);
    priority_queue<plli, vector<plli>, greater<plli>> pq;

    ll ans = 0;
    for (int i = 1; i <= n; i++) {
        cin >> vw[i];
        ans -= vw[i];
    }
    for (int i = 1; i <= m; i++) {
        int v, u;
        ll w;
        cin >> v >> u >> w;
        adj[v].push_back(plli(w, u));
        adj[u].push_back(plli(w, v));
        dw[v] += w;
        dw[u] += w;
        ans += w;
    }
    for (int i = 1; i <= n; i++) {
        pq.push(plli(dw[i]-vw[i], i));
    }

    while (!pq.empty()) {
        plli p = pq.top();
        pq.pop();

        if (!removed[p.second] && p.first < 0) {
            int u = p.second;
            ans += vw[u];
            ans -= dw[u];
            for (plli edge: adj[u]) {
                if (!removed[edge.second]) {
                    dw[edge.second] -= edge.first;
                    pq.push(plli(dw[edge.second]-vw[edge.second], edge.second));
                }
            }
            removed[u] = true;
        }
    }

    cout << ans << '\n';

    return 0;
}