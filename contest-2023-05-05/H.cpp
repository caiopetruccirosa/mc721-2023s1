#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pii pair<int,int>
#define pcc pair<char,char>

using namespace std;

int a[100001], b[100001];

int main() {_
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<int> winner(n+1);
        for (int x = 2; x <= n; x++) {
            int env = s[x-2]-'0';
            if (env == 0) {
                winner[x] = x-1;
            } else {
                winner[x] = n-x+1;
            }
            cout << winner[x];
            if (x < n)
                cout << ' ';
            else
                cout << '\n';
        }
    }

    return 0;
}