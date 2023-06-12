#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pii pair<int,int>

using namespace std;

pii min_distance(vector<vector<pii>> &dp, vector<int> &w, vector<int> &v , vector<int> &visited, int i, int N, int W) {
    if (i == N || W == 0 || visited[i])
        return make_pair(INT_MAX, INT_MAX);
    
    if (dp[N][W].first > 0)
        return dp[N][W];

    if (w[i] > W)
        return min_distance(dp, w, v, visited, i+1, N, W);

    pii a = min_distance(dp, w, v, visited, i+1, N, W);
    pii b = min_distance(dp, w, v, visited, i+1, N, W-w[i]);
    b = make_pair(b.first+w[i], b.second+v[i]);
    if (a.first < b.first)
        return a;
    return b;
}

int main() {_
    int t;
    cin >> t;
    while (t--) {
        int W, N;
        cin >> W >> N;
        vector<int> w(N+1, 0), v(N+1, 0);
        vector<bool> visited(N+1, false);
        vector<vector<int>> d(N+1, vector<int>(N+1, -1));
        for (int i = 0; i < N; i++)
            cin >> v[i] >> w[i];

        
        for (int i = 1; i <= N; i++) {

        }
    }
    return 0;
}