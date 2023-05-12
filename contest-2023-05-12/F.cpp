#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int main() {_
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        bool prefix = true;
        bool zero = true;
        int ops = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1')
                prefix = false;
            
            if (s[i] == '0' && !prefix && zero) {
                ops++;
                zero = false;
            } else if (s[i] == '1' && !zero) {
                ops++;
                zero = true;
            }
        }
        cout << ops << '\n';
    }

    return 0;
}