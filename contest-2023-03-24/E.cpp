#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

string guy1[1000], guy2[1000], guy3[1000];

void increment_or_insert(map<string, int> &m, string key) {
    if (m.find(key) != m.end()) {
        m[key]++;
        return;
    }
    m[key] = 1;
    return;
}

int main() {_
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        map<string, int> written;
        for (int i = 0; i < n; i++) {
            cin >> guy1[i];
            increment_or_insert(written, guy1[i]);
        }
        for (int i = 0; i < n; i++) {
            cin >> guy2[i];
            increment_or_insert(written, guy2[i]);
        }
        for (int i = 0; i < n; i++) {
            cin >> guy3[i];
            increment_or_insert(written, guy3[i]);
        }

        int pguy1 = 0, pguy2 = 0, pguy3 = 0;
        for (int i = 0; i < n; i++) {
            if (written[guy1[i]] == 1)
                pguy1 += 3;
            else if (written[guy1[i]] == 2)
                pguy1++;
        }
        for (int i = 0; i < n; i++) {
            if (written[guy2[i]] == 1)
                pguy2 += 3;
            else if (written[guy2[i]] == 2)
                pguy2++;
        }
        for (int i = 0; i < n; i++) {
            if (written[guy3[i]] == 1)
                pguy3 += 3;
            else if (written[guy3[i]] == 2)
                pguy3++;
        }

        cout << pguy1 << ' ' << pguy2 << ' ' << pguy3 << '\n';
    }
    return 0;
}