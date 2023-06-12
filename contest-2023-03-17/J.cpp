#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

int main() {_
    int n;
    cin >> n;
    while (n--) {
        vector<bool> legit(12, false), counterfeit(12, false), light(12, false);
        for (int i = 0; i < 3; i++) {
            vector<bool> le(12, false), ct(12, false);
            string l, r, s;
            cin >> l >> r >> s;
            for (char c: l) {
                if (!legit[c-'A']) {
                    if (s == "even") {
                        le[c-'A'] = true;
                    } else {
                        ct[c-'A'] = true;
                        light[c-'A'] = (s == "down");
                    }
                }
            }
            for (char c: r) {
                if (!legit[c-'A']) {
                    if (s == "even") {
                        le[c-'A'] = !le[c-'A'];
                    } else {
                        ct[c-'A'] = !ct[c-'A'];
                        light[c-'A'] = (s == "up");
                    }
                }
            }

            for (int j = 0; j < 12; j++) {
                if (le[j])
                    legit[j] = true;
                if (ct[j])
                    counterfeit[j] = true;
            }
        }

        char c = '#';
        string w;
        for (int i = 0; i < 12 && c == '#'; i++) {
            cout << "A letra " << (char)('A'+i) << " é legitima = " << legit[i] << '\n';
            cout << "A letra " << (char)('A'+i) << " é falsa = " << counterfeit[i] << '\n';
            if (counterfeit[i] && !legit[i]) {
                c = 'A' + i;
                if (light[i]) {
                    w = "light";
                } else {
                    w = "heavy";
                }
            }
        }
        
        cout << c << " is the counterfeit coin and it is " << w << ".\n";
    }
    return 0;
}