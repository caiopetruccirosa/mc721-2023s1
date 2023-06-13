#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int mex(int c1, int c2) {
    if (c1 != 0 && c2 != 0)
        return 0;
    if (c1 != 1 && c2 != 1)
        return 1;
    return 2;
}

int main() {_
    int t;
    cin >> t;
    while (t--) {
        int n;
        string table[2];
        cin >> n >> table[0] >> table[1];
        
        int last0 = -1, last1 = -1;
        vector<int> dp(n+1, 0);
        for (int i = 1; i <= n; i++) {
            if (table[0][i-1] == '0' || table[1][i-1] == '0')
                last0 = i;
            if (table[0][i-1] == '1' || table[1][i-1] == '1')
                last1 = i;
                
            if (last0 == -1 || last1 == -1) {
                dp[i] = dp[i-1] + mex(table[0][i-1]-'0', table[1][i-1]-'0');
            } else {
                dp[i] = 2 + dp[min(last0, last1) - 1];
                last0 = -1, last1 = -1;
            }
        }

        cout << dp[n] << '\n';
    }
    return 0;
}