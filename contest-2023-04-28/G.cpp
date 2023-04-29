#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

// not resolved yet

int main() {_
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> r(n, 0);
        for (int i = 0; i < n; i++)
            cin >> r[i];

        int m;
        cin >> m;
        vector<int> b(m, 0);
        for (int i = 0; i < m; i++)
            cin >> b[i];

        vector<int> seq(n+m, 0);
        int ri = n, bi = m;
        while (ri > 0 && bi > 0) {
            if (r[ri-1] <= b[bi-1]) {
                seq[ri+bi-1] += r[ri-1];
                ri--;
            } else {
                seq[ri+bi-1] += b[bi-1];
                bi--;
            }
        }
        while (ri > 0) {
            seq[ri+bi-1] += r[ri-1];
            ri--;
        }
        while (bi > 0) {
            seq[ri+bi-1] += b[bi-1];
            bi--;
        }

        int best_val = 0, current_val = 0;
        //cout << "Sequência:\n\t";
        for (int i = 0; i < n+m; i++) {
            //cout << seq[i] << ' ';
            current_val += seq[i];
            best_val = max(best_val, current_val);
        }
        //cout << '\n';

        cout << best_val << '\n';
    }

    return 0;
}