#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

short bitmap[200][200];
string s;

void build_d(int n, int m) {
    
}

void build_b(int n, int m) {
}

int main() {_
    char t;
    while (cin >> t && t != '#') {
        int n, m;
        cin >> n >> m;
        if (t == 'B') {
            for (int i = 0; i < n; i++)
                for (int j = 0; j < m; j++)
                    cin >> bitmap[i][j];
            build_d(n, m);
            cout << 'D\t' << n << '\t' << m << '\n';
            cout << s << '\n';
        } else {
            cin >> s;
            build_b(n, m);
            cout << 'B\t' << n << '\t' << m << '\n';
            for (int i = 0; i < n; i++)
                for (int j = 0; j < m; j++)
                    cout << bitmap[i][j] << '\n';
        }

    }

    return 0;
}