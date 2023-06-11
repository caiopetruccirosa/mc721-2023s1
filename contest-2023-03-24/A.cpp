#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

int v[200001];

int main() {_
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> v[i];

        int moves = 0;
        set<int> unique_numbers;
        for (int i = n; i >= 1; i--) {
            if (unique_numbers.find(v[i]) != unique_numbers.end()) {
                moves = i;
                break;
            }
            unique_numbers.insert(v[i]);
        }
        cout << moves << '\n';
    }

    return 0;
}