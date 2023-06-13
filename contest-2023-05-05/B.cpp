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

        for (int i = 1; i <= n; i++)
            cin >> a[i];
        for (int i = 1; i <= n; i++)
            cin >> b[i];

        int online = 0;
        for (int i = n; i > 0; i--)
            if (a[i] != b[i+online])
                online++;

        cout << online << '\n';
    }

    return 0;
}