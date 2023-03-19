#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int main() {_
    int t;
    cin >> t;

    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;

        int profit = a - b;
        if (profit > 0) {
            cout << 1 << '\n';
        } else {
            int quests = ceil((n*1.0)/(a*1.0));
            cout << quests << '\n';
        }
    }

    return 0;
}