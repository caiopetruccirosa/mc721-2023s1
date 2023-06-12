#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

string divisibles[] = { "00", "25", "50", "75" };

int minimum_ops(string n, string div) {
    int l = -1, r = -1;
    
    for (int i = n.size()-1; i >= 0; i--) {
        if (n[i] == div[1]) {
            l = i;
            break;
        }
    }
    if (l < 0)
        return INT_MAX;

    for (int i = l-1; i >= 0; i--) {
        if (n[i] == div[0]) {
            r = i;
            break;
        }
    }
    if (r < 0)
        return INT_MAX;

    return (n.size()-l-1)+(l-r-1);
}

int main() {_
    int t;
    cin >> t;

    while (t--) {
        string n;
        cin >> n;

        int moves = INT_MAX;
        for (string div: divisibles)
            moves = min(moves, minimum_ops(n, div));

        cout << moves << '\n';
    }

    return 0;
}