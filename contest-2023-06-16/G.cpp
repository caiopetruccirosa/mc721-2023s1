#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pii pair<int,int>

using namespace std;

int main() {_
    int t;
    cin >> t;

    while (t--) {
        int m;
        cin >> m;

        vector<vector<int>> days(m);
        for (int i = 0; i < m; i++) {
            int n;
            cin >> n;

            days[i] = vector<int>(n);
            for (int j = 0; j < n; j++)
                cin >> days[i][j];
        }

        bool possible = true;
        set<int> players;
        vector<int> winners;
        for (int i = m-1; i >= 0 && possible; i--) {
            int day_winner = -1;
            for (int j = days[i].size()-1; j >= 0; j--) {
                int p = days[i][j];
                if (players.find(p) == players.end()) {
                    day_winner = p;
                    players.insert(p);
                }
            }

            if (day_winner == -1)
                possible = false;
            else
                winners.push_back(day_winner);
        }

        if (possible) {
            for (int i = winners.size()-1; i >= 0; i--) {
                cout << winners[i];
                if (i > 0)
                    cout << ' ';
                else
                    cout << '\n';
            }
        } else {
            cout << -1 << '\n';
        }
    }

    return 0;
}