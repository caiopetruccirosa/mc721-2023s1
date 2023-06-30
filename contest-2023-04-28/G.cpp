#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int main() {_
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> r(n+1), p(n+1);
        for (int i = 1; i <= n; i++) {
            cin >> r[i];
            p[i] = p[i-1] + r[i];
        }

        int m;
        cin >> m;
        vector<int> b(m+1), q(m+1);
        for (int i = 1; i <= m; i++) {
            cin >> b[i];
            q[i] = q[i-1] + b[i];
        }

        vector<vector<int>> dp(n+1, vector<int>(m+1));
        for (int i = 1; i <= n; i++)
            dp[i-1][0] = max(dp[i-1][0], p[i]);
        for (int j = 1; j <= m; j++)
            dp[0][j] = max(dp[0][j-1], q[j]);
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                dp[i][j] = max(dp[i-1][j-1], max(dp[i][j-1], max(dp[i-1][j], p[i]+q[j])));
            }
        }
        cout << dp[n][m] << '\n';
    }

    return 0;
}