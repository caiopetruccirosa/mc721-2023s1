#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int imperfectness(string s) {
    int current = 1, worst = 0;
    char last = '#';
    for (char c: s) {
        if (last == c) {
            current++;
            worst = max(worst, current);
        } else {
            current = 1;
        }
        last = c;
    }
    return worst;
}

int minimize(vector<int> &imperfect, string s, int i, int n) {
    if (i >= n)
        return 0;

    if (s[i] != '?')
        return 0;
    return 0;
}

int main() {_
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        vector<int> imperfect(n, -1);

        cout << imperfectness(s) << '\n';
    }

    return 0;
}