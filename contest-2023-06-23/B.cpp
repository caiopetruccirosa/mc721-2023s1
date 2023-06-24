#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pii pair<int,int>

using namespace std;

int main() {_
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;

        vector<vector<int>> grid(2, vector<int>(n));
        bool s = true;
        for (int i = 0; i < n; i++) {
            grid[s][i] = i+1;
            if (i < n-1)
                grid[s][i+1] = n+i+1;
            s = !s;
        }
        grid[0][0] = 2*n;

        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < n; j++) {
                cout << grid[i][j];
                if (j < n-1)
                    cout << ' ';
            }
            cout << '\n';
        }
    }

    return 0;
}