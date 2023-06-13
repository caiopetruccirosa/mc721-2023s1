#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

int main() {_
    int t;
    cin >> t;
    while (t--) {
        int a, b, p;
        string s;
        cin >> a >> b >> p >> s;

        int idx = 1;
        bool bus = false, tram = false;
        for (int i = s.size()-1; i > 0; i--) {
            if (s[i-1] == 'A' && !bus) {
                if (p >= a) {
                    p -= a;
                    bus = true;
                    tram = false;
                } else {
                    idx = i+1;
                    break;
                }
            } else if (s[i-1] == 'B' && !tram) {
                if (p >= b) {
                    p -= b;
                    bus = false;
                    tram = true;
                } else {
                    idx = i+1;
                    break;
                }
            }
        }
        cout << idx << '\n';
    }
    return 0;
}