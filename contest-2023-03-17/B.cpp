#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

int main() {_
    int A, B;
    while (cin >> A >> B && A != 0 && B != 0) {
        unordered_set<int> a, b;
        for (int i = 0; i < A; i++) {
            int c;
            cin >> c;
            a.insert(c);
        }
        for (int i = 0; i < B; i++) {
            int c;
            cin >> c;
            b.insert(c);
        }
        int ac = 0, bc = 0;
        for (int c: a) {
            if (b.count(c) == 0)
                ac++;
        }
        for (int c: b) {
            if (a.count(c) == 0)
                bc++;
        }
        cout << min(ac, bc) << '\n';
    }

    return 0;
}