#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

int get_duration(char c) {
    if (c == 'W')
        return 64;
    if (c == 'H')
        return 32;
    if (c == 'Q')
        return 16;
    if (c == 'E')
        return 8;
    if (c == 'S')
        return 4;
    if (c == 'T')
        return 2;
    return 1;
}

int main() {_
    string s;
    while (cin >> s && s != "*") {
        int correct = 0, length = 0;
        for (char c: s) {
            if (c == '/') {
                if (length == 64) {
                    correct++;
                }
                length = 0;
            } else {
                length += get_duration(c);
            }
        }
        cout << correct << '\n';
    }

    return 0;
}