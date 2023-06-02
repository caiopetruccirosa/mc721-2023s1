#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

void increment_or_init(map<char, int> &m, char key) {
    if (m.find(key) != m.end()) {
        m[key]++;
    } else {
        m[key] = 1;
    }
}

int main() {_
    int t;
    cin >> t;

    while (t--) {
        map<char, int> m;

        string s;
        cin >> s;

        vector<bool> open(s.size(), 0);
        vector<bool> appeared(26, false);

        int last_op = -1;
        for (int i = 0; i < s.size(); i++) {
            int idx = s[i]-'A';
            if (appeared[idx]) {
                open.push_back(last_op-1);
            } else {
                open.push_back(last_op+1);
            }
            appeared[idx] = true;
            last_op = 
            cout << open[i] << ' ';
        }

        for (int i = 0; i < open.size(); i++) {
            cout << open[i] << ' ';
        }
        cout << '\n';

        //cout << "Case " << t+1 << '\n';
        //for (pair<char, int> v: m) {
        //    cout << v.first << " = " << v.second << '\n';
        //}
    }

    return 0;
}