#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pii pair<int,int>
#define plli pair<ll,int>
#define pllc pair<ll,char>

using namespace std;

ll min_cost(
    vector<char> color,
    vector<ll> position,
    vector<vector<plli>> adj,
    int n,
    char excluding_color
) {
    priority_queue<plli, vector<plli>, greater<plli>> pq;
    vector<bool> taken(n, false);

    ll cost = 0;
    int connected = 0;
    pq.push(make_pair(0LL, 0));

    while (!pq.empty()) {  }

    return cost;
}

int main() {_
    int n;
    cin >> n;

    vector<char> color(n);
    vector<ll> position(n);
    vector<vector<plli>> adj(n);
    for (int i = 0; i < n; i++) {
        cin >> position[i] >> color[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j) {
                ll d = abs(position[i]-position[j]);
                adj[i].push_back(plli(d,j));
                adj[j].push_back(plli(d,i));
            }
        }
    }


    return 0;
}