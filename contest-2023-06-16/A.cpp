#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pii pair<int,int>

using namespace std;

int bfs(int n, int m) {
    set<int> visited;
    queue<pii> q;

    q.push(pii(m, 0));
    while (!q.empty()) {
        pii p = q.front();
        q.pop();
        int k = p.first, d = p.second;

        if (k == n)
            return d;

        visited.insert(k);

        if (k % 2 == 0 && visited.find(k/2) == visited.end())
            q.push(pii(k/2, d+1));
        if (visited.find(k+1) == visited.end())
            q.push(pii(k+1, d+1));
    }

    return -1;
}

int main() {_
    int n, m;
    cin >> n >> m;

    cout << bfs(n, m) << '\n';

    return 0;
}