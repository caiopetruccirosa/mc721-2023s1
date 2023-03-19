#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int main() {_
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int ops = 0;
        int state = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                state++;
            } else {
                state--;
            }

            if (state < 0) {
                s.push_back(s[i]);
                // could s.erase(i) and decrease i but would only increase complexity
                state++;
                ops++;
            }
        }
        cout << ops << '\n';
    }

    return 0;
}