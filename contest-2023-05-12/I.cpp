#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define LIMIT 1000000

using namespace std;

long long ways[101][101];

int main() {_
    int n, k;
    cin >> n >> k;

    while (n != 0 || k != 0) {
        for (int i = 0; i <= 100; i++) {
            ways[i][0] = 1;
            ways[1][i] = 1;
            ways[i][1] = i;
            ways[0][i] = 0;
        }

        for (int i = 2; i <= k; i++) {
            for (int j = 2; j <= n; j++) {
                ways[i][j] = (ways[i-1][j] + ways[i][j-1]) % LIMIT;
            }
        }

        long long w = ways[k][n];

        cout << w << '\n';
        cin >> n >> k;
    }

    return 0;
}