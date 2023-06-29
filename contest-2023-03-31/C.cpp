#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pii pair<int,int>

using namespace std;

int main() {_
    int k;
    while (cin >> k) {
        vector<pii> pairs;
        for (int y = k+1; y <= 2*k; y++)
            if ((k*y)%(y-k) == 0)
                pairs.push_back(pii((k*y)/(y-k), y));
        cout << pairs.size() << '\n';
        for (pii p: pairs)
            cout << "1/" << k << " = 1/" << p.first << " + 1/" << p.second << '\n';
    }
    return 0;
}