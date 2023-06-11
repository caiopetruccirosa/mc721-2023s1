#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

int main() {_
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        vector<bool> appeared(26, false);

        char last_char = '#';
        bool not_suspicious = true;
        for (int i = 0; i < n; i++) {
            if (appeared[s[i]-'A'] && last_char != s[i]) {
                not_suspicious = false;
            }
            last_char = s[i];
            appeared[s[i]-'A'] = true;
        }
        
        if (not_suspicious) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}