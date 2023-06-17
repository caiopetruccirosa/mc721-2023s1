#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pii pair<int,int>

using namespace std;

int main() {_
    int k;
    while (cin >> k) {
        vector<pii> pairs;
        for (int x = k-1; x > k/2; x--) {
            int y = k-x;
            if (((x*y)/(x+y)) == k)
                pairs.push_back(pii(x, y));
        }
    }

    return 0;
}