#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

bool is_possible(vector<int> &bars, int i, int p, int current, int target) {
    if (current == target)
        return true;

    if (i == p)
        return false;

    return is_possible(bars, i+1, p, current, target) || is_possible(bars, i+1, p, current+bars[i], target);
}

int main() {_
    int t;
    cin >> t;
    while (t--) {
        int n, p;
        cin >> n >> p;

        vector<int> bars(p);
        for (int i = 0; i < p; i++)
            cin >> bars[i];

        if (is_possible(bars, 0, p, 0, n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}