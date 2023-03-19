#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

bool can_be_printed(string s, int n) {
    bool should_double = false;

    for (int i = 0; i < n-1; i++) {
        if (should_double) {
            if (s[i] != s[i+1]) {
                return false;
            } else {
                i++;
            }
        }

        should_double = !should_double;
    }

    return !should_double;
}

int main() {_
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        
        string s;
        cin >> s;

        if (can_be_printed(s, n)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}