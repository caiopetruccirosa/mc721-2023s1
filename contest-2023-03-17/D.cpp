#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

int main() {_
    int n;
    while (cin >> n && n != 0) {
        int top = 1, north = 2, west = 3, tmp;
        for (int i = 0; i < n; i++) {
            string cmd;
            cin >> cmd;
            if (cmd == "north") {
                tmp = north;
                north = top;
                top = 7-tmp;
            } else if (cmd == "south") {
                tmp = north;
                north = 7-top;
                top = tmp;
            } else if (cmd == "west") {
                tmp = west;
                west = top;
                top = 7-tmp;
            } else if (cmd == "east") {
                tmp = west;
                west = 7-top;
                top = tmp;
            }
        }
        cout << top << '\n';
    }
    return 0;
}