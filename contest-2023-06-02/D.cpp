#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

int mex_score(set<int> &scores) {
    int mex = 0;
    int biggest_score = -1;
    for (int s: scores) {
        if (s != mex) {
            return mex;
        }
        biggest_score = max(biggest_score, s);
        mex++;
    }
    return biggest_score+1;
}

int main() {_
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n, 0);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end());
        
        set<int> scores;
        bool direction = true;
        int i = 0, j = n-1, k = 0;
        while (k < n) {
            int s = a[i] + a[j];
            scores.insert(s);
            if (direction) {
                i++;
            } else {
                j--;
            }
            direction = !direction;
            k++;
        }
        cout << mex_score(scores) << '\n';
    }

    return 0;
}