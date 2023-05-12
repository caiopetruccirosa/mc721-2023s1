#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int lines_appearances[101];

int main() {_
    int n;
    cin >> n;

    for (int i = 1; i <= 100; i++) {
        lines_appearances[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        int r;
        cin >> r;
        for (int j = 0; j < r; j++) {
            int k;
            cin >> k;
            lines_appearances[k]++;
        }
    }

    bool first = true;
    for (int i = 1; i <= 100; i++) {
        if (lines_appearances[i] == n) {
            if (!first) {
                cout << ' ';
            }
            cout << i;
            first = false;
        }
    }
    cout << '\n';

    return 0;
}