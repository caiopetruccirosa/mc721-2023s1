#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int mex(char c1, char c2) {
    if (c1 != '0' && c2 != '0')
        return 0;
    if (c1 != '1' && c2 != '1')
        return 1;
    if (c1 != '2' && c2 != '2')
        return 2;
}

int table_mex[100001][100001];

int main() {_
    int t;
    cin >> t;

    while (t--) {
        int n;
        string table[2];
        cin >> n >> table[0] >> table[1];

        for (int i = 0; i < n; i++) {
            table_mex[i][i] = mex(table[0][i], table[1][i]);
        }

        int sum = 0, best_mex = 0, current_mex = 0;
        for (int i = 0; i < n; i++) {
            if (best_mex == 1 && current_mex == 0) {
                best_mex = 0;
                sum += 2;
            }
            current_mex = mex(table[0][i], table[1][i]);
            if (current_mex < best_mex)
        }
        cout << sum << '\n';
    }

    return 0;
}